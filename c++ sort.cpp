﻿// c++ sort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "sortBase.h"
#include "BubblseSort.h"
#include <string>
#include<vector>

int main()
{
	//string test

	std::vector < std::string > s = { "ds", "sd", "sd", "sdsd" };
	BubbleSort<std::string> str_temp(s);


	str_temp.sort();
	str_temp.display();

	std::vector < int > num = { 1,2,3,4,6,1,5,7,8,0,-1,10 };
	BubbleSort<int> int_temp(num);

	int_temp.sort();
	int_temp.display();

	std::vector < double > dou_num = { 1.23,2.323,3.323,4.23,63434,14545.45,5545.45,7545,8,0,-1.54,10 };
	BubbleSort<double> dou_temp(dou_num);

	dou_temp.sort();
	dou_temp.display();
	
    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
