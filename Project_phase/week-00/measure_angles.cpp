// measure_angles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <math.h>  
#include <sstream>

cv::Mat ablak;

void myMouseCallback(int event, int x, int y, int flags, void* userdata)
{
	cv::Mat table;
	table = ablak.clone();
	std::string fok;
	double line1 = (table.rows / 2) - y;
	if (line1 < 0) {
		line1 *= -1;
	}
	double line2 = (table.cols / 2) - x;
	if (line2 < 0) {
		line2 *= -1;
	}
	double degree = atan(line1 / line2) * 57.2957795;

	if (flags & cv::MouseEventFlags::EVENT_FLAG_LBUTTON) {
		cv::line(table, { table.rows / 2, table.cols / 2 }, {x, y}, CV_RGB(109, 4, 213), 2);
		if (degree == 90.0) {
			
		}
		if (y <= table.rows / 2 && x <= table.cols / 2) {
			degree = (90 - degree) + 90;
			
		} else if (x < table.cols / 2 && y > table.rows / 2) {
			degree += 180;

		}
		else if (x > table.cols / 2 && y > table.rows / 2) {
			degree = (90 - degree) + 270;
		}

		std::ostringstream strs;
		strs << degree;
		std::string str = strs.str();
		cv::putText(table, str, { 400, 400 }, cv::FONT_HERSHEY_COMPLEX, 1, {68, 28, 5}, 1, cv::LINE_AA);
		cv::imshow("Ablak", table);
	}
	
}

int main()
{
	ablak = cv::Mat(600, 600, CV_8UC3);
	ablak = CV_RGB(166,225,30);
	cv::circle(ablak, {ablak.rows / 2, ablak.cols / 2}, 10, CV_RGB(255, 0, 0), -1);
	cv::line(ablak, {ablak.rows / 2, ablak.cols / 2}, {600, ablak.cols / 2}, CV_RGB(255, 0, 0), 2);
	cv::imshow("Ablak", ablak);
	cv::setMouseCallback("Ablak", myMouseCallback);
	cv::waitKey(0);

}


