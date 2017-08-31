编写一个录像工具。  
这个project重点需要预备队员掌握以下内容：1、多线程编程。2、makefile多文件编译以及如何链接一个库。3、一点点关于opencv的知识。  
具体要求：  
1、编写一个Record类，包含以下函数：  
	1）open() //打开电脑的摄像头，并把图像显示在窗口中。  
	2）startRecord(string file_name) //开始录制，并把录像保存在"file_name"文件中。  
	3）stopRecord() //结束录制  
	4）close() //关闭摄像头，关闭显示窗口  
   PS：要求类的声明与定义分文件编写，即.h文件中声明，.cpp中定义  
2、在main函数中使用这个类，并且在调用open()函数之后开始接收用户的终端输入，当用户输入start时调用startRecord开始录制，输入stop时调用stopRecord结束录制。  
   PS：要实现同时处理终端输入和图像录制需要用到多线程。  
3、编写makefile编译你的项目。  
   PS：注意在编译时用恰当的方法引用所用到的opencv库，否则会在链接时出现"undefined referrence"错误。  