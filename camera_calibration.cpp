#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
	Mat img = imread("lenna.jpg", IMREAD_COLOR);
	imshow("Display", img);
	waitKey(0);
	return 0;
}