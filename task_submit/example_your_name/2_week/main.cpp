#include "record.h"

int main(int, char**)
{
	Record rec;
	rec.open();

	bool isQuit = false;

	while(!isQuit)
	{
		string cmd;
		cin >> cmd;

		if(cmd == "start")
		{
			string filename;
			cin >> filename;

			rec.startRecord(filename);
		}
		else if(cmd == "stop")
		{
			rec.stopRecord();
		}
		else if(cmd == "quit")
		{
			rec.close();
			cout << "[sys] good bye." << endl;
			isQuit = true;
		}
	}

	return 0;
}
