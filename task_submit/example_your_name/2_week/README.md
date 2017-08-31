## Week 2: Camera Recorder

- Author: ChampionLiu
- Date: 2017-7-7
- Version: 1.0-2
- Abstract: class `Record` Introduce && how to write a `README`

---

#### Functions:
- create a camera to capture a real-time images;
- record images as a video and save it;

#### Introduction for Class:
We create a class `Record`, including 4 functions.
Know that `open()` and `close()` is just to create thread and show camera;
while `startRecord()` and `stopRecord()` is to record as video.
```cpp
//class view
class Record
{
	bool open();	// open camera but not capture video
	void close();	// close camera and thread

	void startRecord();	// start record as video
	void stopRecord();	// stop record and save but camera still available
};
```

#### Demos and Usages:
- To run the program:
```
 ./bin/demo
```

- You will see a camera window, you can type below to record:
```
 start	
```

- To stop and save the video:
```
 stop
```

- To quit the program:
```
 quit
```
---

#### Bugs and Fixs:
- Fix `waitKey` while creates thread for `imshow` [2017.7.21]
- Fix `volatile` and `flag bits` [2017.7.20]

---


