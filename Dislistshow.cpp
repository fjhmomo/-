#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<vector>
#include<iostream>
#include"tou1.h"
#include"tou2.h"
using namespace std;
void Disbookshow(int& number) {
	cout << "请输出你需要删除书本的序号" << endl;
	cin >> number;
	cout << "输入1进行删除 输入字母进行退出" << endl;
}