/*****************************************
*	Doc:		class Record c++ file	 *
*	Author:		SYSUIARC-ChampionLiu	 *
*	Date:		2017-7-7				 *
*	Version:	1.0						 *
*****************************************/

#ifndef __RECORD_H
#define __RECORD_H

#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
#include <pthread.h>
#include <unistd.h>

using namespace cv;
using namespace std;

class Record
{
public:
	Record();
	~Record();

	bool open();
	void startRecord(string file_name);
	void stopRecord();
	void close();

private:
	volatile bool _is_work;
	volatile bool _is_video;
	pthread_t _pth_id;
	string _file_name;

	VideoCapture _cap;
	VideoWriter _video;

	void _setup();
	void _update();
	static void* _recording(void* arg);
};

#endif
