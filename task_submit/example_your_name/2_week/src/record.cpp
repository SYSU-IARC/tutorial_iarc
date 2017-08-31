/*****************************************
*	Doc:		class Record head file	 *
*	Author:		SYSUIARC-ChampionLiu	 *
*	Date:		2017-7-7				 *
*	Version:	1.0						 *
*****************************************/

#include "record.h"

Record::Record():_is_work(false), _is_video(false)
{
}

Record::~Record()
{
   	if(_is_work) pthread_join(_pth_id, NULL); 
}

bool Record::open()
{
	_is_work = true;

	cout << "[rev] pthread init..." << endl;
	if(pthread_create(&_pth_id, NULL, _recording, (void*)this) != 0)
	{
		cout << "[rev] pthread init failed." << endl;
		return false;
	}

	cout << "[rev] pthread init successfully!" << endl;
	return true;
}

void Record::startRecord(string file_name)
{
	_file_name = file_name;
	_video.open(_file_name, CV_FOURCC('M','J','P','G'), 25.0, Size(640, 480), true);
	if(_is_work)
	{
		_is_video = true;
		cout << "[rev] start recording..." << endl;
	}
}

void Record::stopRecord()
{
	_is_video = false;
	cout << "[rev] stop recording..." << endl;
} 

void Record::close()
{
	destroyWindow("camera");

	_is_video = false;
	_is_work = false;
	usleep(1000);
	pthread_join(_pth_id, NULL);
	cout << "[rev] record closed." << endl;
}

////////////////////////////////////////////////

void Record::_setup()
{
	_cap.open(0);

	namedWindow("camera");

	if(!_cap.isOpened() )
	{
		cout << "[rev] camera open error." << endl;
		close();
	}

	cout << "[rev] record setup." << endl;	
}

void Record::_update()
{
	Mat _frame;

	_cap >> _frame;
	imshow("camera", _frame);
	waitKey(0);
	if(_is_video)
	{
		_video << _frame;
		//cout << "[rev] record updating.." << endl;
	}
}

void* Record::_recording(void* arg)
{
	Record* record = (Record *) arg;
	record->_setup();
	while(record->_is_work)
		record->_update();
	record->_video.release();
	return NULL;
}
