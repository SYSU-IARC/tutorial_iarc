# SYSU-IARC 教程汇总

## opencv - linux安装指南

安装opencv,有两种安装方式，  
### 一、源码安装
第一种方式较复杂，但能得到最新的opencv3版本[opencv源码安装教程](http://docs.opencv.org/master/d7/d9f/tutorial_linux_install.html)  
需要注意的是需要确定安装opencv的版本，在cmake之前，分别
```
cd ~/opencv
git checkout 3.3.0
cd ~/opencv_contrib
git checkout 3.3.0
```
目前最新版本是3.3.0 于2017.08.03发布

关于cmake
你可以按照教程中的cmake -D +一堆参数,我们建议使用 cmake-gui以将项目中cmake可选择的参数通过图形化界面全部显示出来
首先安装cmake-gui  
`sudo apt-get install cmake-qt-gui`
接着直接在命令行输入  
`cmake-gui`
按照图形化界面的提示选择 源码：opencv文件夹 build：opencv/build文件夹，configure后generate即可  

关于make
如果你的机子支持多线程，为加快编译速度，可以选择  
`make -j9`

### 二、apt-get (ubuntu)
第二种方式非常简单，但只提供opencv2版本[opencv-apt-get安装教程](http://blog.csdn.net/tina_ttl/article/details/52745807)  
这个教程对apt-get方式提供了详细的说明，其实里面也只有一条指令`sudo apt-get install libcv-dev`

## 推荐阅读资料
[程序员的自我修养](https://leohxj.gitbooks.io/a-programmer-prepares/content/)

## Linux相关
[Github的正确打开方式](https://github.com/baixing/FE-Blog/issues)  
[Shell入门笔记](https://shimo.im/doc/eN7lHqW2l2IZdTbT)  
[GitHub 风格的 Markdown 语法](https://github.com/baixing/FE-Blog/issues/6)  


## 飞行器操作训练说明
训练方法  
油门的精准控制是飞手训练的重中之重  
1. 悬停——精准控制油门，保持位置和高度大体不变
2. 迅速地定点降落
3. 左右旋转飞行器的同时保持高度（油门）不变
4. 沿着固定路线快速飞行（例如严格按照边长为4米的正方形路线飞行，越快完成越好）
5. 模拟失控飞行（给飞行器的一角挂上重物，使飞行器飞行不稳）
6. 花式飞行，换更高难度的飞行路线，灵巧变换飞行旋转角
7. （难度最高）在飞行器倒转角度飞行情况下仍能控制好飞行器的方向
8. 其他：  
（1） 让飞行器灵巧地飞回自己的手上  
（2） 远距离精准降落  
