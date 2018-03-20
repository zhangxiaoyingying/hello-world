
#include <iostream>
#include "opencv2/core/core.hpp"//因为在属性中已经配置了opencv等目录，所以把其当成了本地目录一样
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/nonfree/nonfree.hpp" //在opencv中使用sift算子需要加头文件"opencv2/nonfree/nonfree.hpp"，
#include "windows.h"
#include "opencv2/legacy/legacy.hpp"
using namespace cv;
//opencv配准好之后的测试文档
void main()
{
	//IplImage *src;
	//src = cvLoadImage("aa.jpg"); //这里将lena.jpg和lena.cpp文件放在同一个文件夹下
	//src=cvLoadImage("E:\\实验素材\\下载地形原始数据\\美国潘迪顿机场\\Rectangle_#4_卫图_Level_19.tif");//由于是32位运行，所以，图片要放在opencvtest\opencvtest文件下
	//cvNamedWindow("lena",CV_WINDOW_AUTOSIZE);
	//cvShowImage("lena",src);
	//cvWaitKey(0);
	//cvDestroyWindow("lena");

	//cvReleaseImage(&src);
	Mat img=imread("E:\\实验素材\\下载地形原始数据\\美国潘迪顿机场\\Rectangle_#4_卫图_Level_19.tif");
	imshow("image",img);
	waitKey(0);

}


