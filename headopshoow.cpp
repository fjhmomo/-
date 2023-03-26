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
void headopshow(int &n1,int&n2)
{
	n1 = -1, n2 = -1;
	system("cls");
	cout << "输入0 0表示退出" << endl;
	cout << "输入你要修改的第一本书的序号" << endl;
	cin >> n1;
	cout << "输入你要修改的第二本书的序号" << endl;
	cin >> n2;
}