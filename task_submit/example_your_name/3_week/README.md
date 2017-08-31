## Week 3: Simple Shape Detect

- Author: ChampionLiu
- Date: 2017-7-26
- Version: 1.0-1

---

Background:
- Each circle means a ground robot;
- These are ideal samples;
- I signed Noise as blue color, just for easy to check;

These samples includes 3 pieces of photos:
- 1.basic (include `tangency` and 'edged incomplete circle');
- 2.develop (include `salt points`);
- 3.xxx (include kind of `awful` things);

Commands of Detections and Hints:
- 1.can recognize full circles (you can use `Hough Line Transform`);
- 2.can recognize > 50% circles;
- 3.can draw the edges (rectangle is okay);
- 4.can count for the number of valid samples of detection;

Parameters for samples:
- The whole test sample is 2000px * 2000px, 8 bits with single channel;
- Ground robot radius is equal to 30 px, other radius' can seem as noise;

Answers and Reference Codes:
- I will give answer after you submit your codes without my reference codes1;

---

#### 识别分类：


- 圈出`完整的标准圆`并计数A
- 圈出`边界的标准圆`并计数B（角度大于60度）
- 圈出`重合的标准圆`并计数C（重合割线对应的角度小于60度）


三种计数类型，`A、B、C`分别用`R、G、B`颜色圈出并输出数字。


输出图片文件名：`samples_${index}_output.jpg`

输出数量文件名：`samples_${index}_numnber.txt`

