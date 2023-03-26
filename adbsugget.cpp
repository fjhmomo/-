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
library adbmakeboor() {
	system("cls");
	library temp;
	int number;
	string data1;
	cout << "请按照以下提示输入增添书本的信息" << endl;
	cout << "请输入书本的序号" << endl;
	cin >> number;
	temp.number = number;
	cout << "请输入书本的名字" << endl;
	cin >> data1;
	temp.bookname = data1;
	cout << "请输入作者的名字" << endl;
	cin >> data1;
	temp.autorname = data1;
	cout << "请输入书本的信息" << endl;
	cin >> data1;
	temp.imformation = data1;
	cout << "请输入书本的价格" << endl;
	cin >> number;
	temp.price = number;
	return temp;
}