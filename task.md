# 暑期实战任务

# 须知：

1. 暑期实战时间为7.10-8.27，为期七周，前三周为基础任务，后四周为分流任务（７月中旬前发布）。请认真对待前三周的基础学习。我们会根据大家在暑假期间的综合表现于９月上旬公布考核结果。
3. 基础好的队员可以直接跳过已经掌握的部分，而着重完成后期的分流任务，因为后期分流任务完成的质量是一个明显的考核标准，对于基础薄弱的队员，请打好基础。
4. 我们推荐大家在每周的截止日期前完成规定任务，但这并非硬性标准，你可以根据自己的暑假安排提前完成或者推迟完成，这并不影响考核结果。
5. 选修内容不是必须的，但我们建议你掌握尽可能多的技能，这将会帮助你提高效率。
6. 对于暑假留校的同学，我们每周六会在实验室D301进行指导/答疑/解决疑难问题，你们可以在这个时间来实验室寻求正式队员的帮助。你们若有问题可以通过Issue的方式来提问，如果有推荐的学习资料可以merge request来补充。对于暑假不在学校的同学，我们建议你在Gitlab上和群上保持活跃。
7. 请多通过issue的方式来发起正式的讨论，尽量减少使用Q群发问，多尝试通过google获得解答。

## 任务成果提交方式

每周任务请提交自己的代码到gitlab你自己的分支上,任务完成的质量将作为我们考核的参考标准之一
你们在gitlab sysuiarc-tutorial团队中的权限为developer，即可以修改子分支，但不可以创建子分支，也不能修改主分支master。
具体方式：

```
git clone https://gitlab.com/SYSU-IARC-TUTORIAL/tutorial_iarc/
cd tutorial_iarc
git branch -r #查看远程所有分支
git checkout -b 本地分支名 origin/远程分支名-你的分支名
mv task_submit/example_your_name your_name #改成你自己的名字(命名格式：英文+中文，如 jackie肖鉴津)
```

# 推荐资料

优先阅读以下资料

- [程序员的自我修养（1-4章，其余选读）](https://leohxj.gitbooks.io/a-programmer-prepares/content/) 可能需要翻墙阅读
- [团队编程规范](https://shimo.im/doc/rfK9ome7WLEZ0xrA/)
- [团队技术文档](https://gitlab.com/SYSU-IARC-TUTORIAL/tutorial_iarc/blob/master/technical_report.pdf)

其他资料推荐

- 鸟哥的Linux教程

## 第一周（7.10-7.16）

必学内容：

1. 推荐安装ubuntu14.04/16.04 或者ArchLinux，也可以安装任何你喜欢的Linux。但对于已经能熟练使用linux系统的同学，建议你安装Arch Linux，这是队伍无人机所使用的系统，这个系统轻量简洁，官方文档齐全，比ubuntu更加稳定。(之前如果没有安装过Linux的话，不建议第一次就装这个系统，这个系统并非新手向。) 请避免使用虚拟机（你可以用虚拟机来模拟ubuntu系统安装，但最后请安装在硬盘而非虚拟机上）
2. 学习git，熟悉gitlab的使用
3. 熟悉linux，掌握linux的基础命令
4. g++

选修内容：

1. 理解linux中的man或help命令，尽管google也是一种方法，但man或help命令往往最全面，最易获取也是最详细的命令说明。
2. 科学上网。你可以使用免费的Hosts，Lantern等（在github上都可以找到），也可以选择付费的翻墙软件。

本周任务：

1. 使用g++编译一个C++程序, 输出Hello World；(重点在g++的使用)
2. 使用git把[1]的整个工程提交到gitlab上（注意不要上传你自己工程下的编译文件（如*.o)你可以在.gitignore中设置）；
3. 安装opencv 可参见：[opencv3常见问题合集](https://shimo.im/doc/p3gRFoLd7Z43lkXZ)

## 第二周（7.17-7.23）

必学内容：

1. makefile
2. shell脚本
3. 基本的markdown语法


选修内容：

1. Vim （或者Emacs）Vim 是一款强大的文本编辑器，我们强烈建议你熟练地掌握Vim（或Emacs），这将有助于你提升编程的效率。
2. 飞行操控。（队伍会提供玩具无人机，如果你暑假在学校的话可以来实验室拿飞行器去训练。训练飞行器操控技巧的一个重要目的在于——避免损失贵重的无人机——无人机在调试&&实际飞行时可能遇到意外情况或者失控，如果没有良好的飞行器操控技巧我们不会冒险让你使用无人机）详情请参见[队伍飞行操控教程](https://gitlab.com/SYSU-IARC-TUTORIAL/tutorial_iarc/blob/master/tutorial.md)
3. 习惯阅读英文文档以及官方Document。

本周任务：

1. 编写一个多文件的C++程序，阅读《中大空中机器人团队代码规范》，用opencv写一个多线程的录像工具，在录像的同时处理用户输入（开始，暂停，停止录制）[具体要求](https://gitlab.com/SYSU-IARC-TUTORIAL/tutorial_iarc/blob/master/opencv_exercise.md)；所有代码的命名以及架构必须按照《团队代码规范》来进行；
2. 为[1]写一个makefile文件并编译运行通过； 
3. 用git上传到gitlab上，并使用markdown按照《团队代码规范》写一份README.md；
4. [Shell习题](https://gitlab.com/SYSU-IARC-TUTORIAL/tutorial_iarc/blob/master/shell_exercise.md)  可参考[菜鸟教程](http://www.runoob.com/linux/linux-shell.html)，掌握基础命令即可


## 第三周（7.24-7.30）

必学内容：

1. 阅读iRobotCreate for IARC Mission 7文档，了解地面机器人的运行机制，尤其是状态机的实现部分；
2. 了解基本opencv，包括core, highgui, imgproc三个部分；

选修内容：

1. cmake
2. 航拍。（队伍提供精灵4一架，选修此项内容的前提是你已经通过了队伍的飞行考核，此外借用精灵4需要跟副队长肖鉴津申请，除了工学院广场（我们有飞行批条）之外不可以在中大校内其他地方飞行）

本周任务：

1. 利用opencv写一个遍历查询地面机器人的类，提供demo测试程序，参照《团队代码规范》；测试样本为一个2000*2000的8位单通道Mat，上面若干个圆（可能是地面机器人或噪声），地面机器人r=30，俯视图，找出地面机器人的中心点；
2. 用git上传到gitlab上，并使用markdown按照《团队代码规范》写一份README.md。

# 后四周分流任务
第四周开始我们将按照各个队员的兴趣分流到各个组别之中，若对分流任务有问题，请联系各组组长。

[定位组分流任务](https://gitlab.com/SYSU-IARC-TUTORIAL/tutorial_iarc/blob/master/group_task/positioning_group.md)  
[导航组分流任务](https://gitlab.com/SYSU-IARC-TUTORIAL/tutorial_iarc/blob/master/group_task/navigation_group.md)  
[策略组分流任务](https://gitlab.com/SYSU-IARC-TUTORIAL/tutorial_iarc/blob/master/group_task/strategy_group.md)  
[图像识别组分流任务](https://gitlab.com/SYSU-IARC-TUTORIAL/tutorial_iarc/blob/master/group_task/vision_group.md)  

## 组别介绍

导航组  
组长：吴侃  
导航组，利用人工势场法等主动避障算法实现无人机对运动的地面机器人的跟踪，同时避开运动的障碍物，并在指定地点降落。你需要熟练C++、linux平台下的编程。你将掌握无人机控制框架，跟踪、降落、避障算法，学会整合各个项目（makefile修改）、编译第三方库等。  

定位组  
组长：赖子良  
定位组致力于通过视觉信息及惯性信息实现无人机在没有GPS的情况下的室内定位，这是一个致力于与玄学对抗的小组，专治传感器以及硬件的玄学问题。你将积累大量的玄学处理经验和图像处理技巧。  

图像识别组  
组长：邓文钧  
图像识别组主要负责对地面机器人的识别，跟踪以及状态估计。你需要熟练使用C++，有阅读SDK文档能力。你将掌握在linux下编译，运行及调试程序、根据算法原理写程序的能力。  

策略组  
组长：肖鉴津  
策略组顾名思义主要负责比赛策略的研究和测试，最大化比赛分数。你需要有良好的C++编程基础，熟悉飞行器的整体架构，善于在原有方案上创新改进。你将学习到机器学习的相关知识，优化比赛策略。  

# 挑战任务
挑战任务只推荐基础良好，成绩优异，擅长机器学习或数学建模的同学参加，详见(https://gitlab.com/SYSU-IARC-TUTORIAL/tutorial_iarc/blob/master/challenge_task.md)

# 激励机制
我们会根据暑期表现挑选两名优秀的候选队员到北京观赛，到北京的差旅费（包含来回火车票，住宿费）按照学校的报销制度予以报销，参与评选的基准是于8月18前提前完成所有的任务，若有多个队员提前完成所有任务，则根据完成任务的质量，该队员在暑假期间技术能力的进步程度，参与积极性，gitlab提交记录等（由组长们共同评定）优中选优。加油！