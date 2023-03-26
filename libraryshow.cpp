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
void Libraryshow(vector<library>& s) {
	system("cls");
	if (s.size() == 0)
	{
		cout <<" 当前没有书本 " << endl;
	}
	else {
		//cout << "序号 书本名字  作者  基本信息介绍  价格";
		for (int i = 0; i < s.size(); i++)
		{
			cout << "序号:  "<<s[i].number << endl;
			cout << "书本名称:  "<<s[i].bookname << endl;
			cout << "作者:  " << s[i].autorname << endl;
			cout <<"基本信息介绍:  "<< s[i].imformation << endl;
			cout <<"价格:  "<< s[i].price << endl;
			cout << "----------------------------------------------------------------" << endl;
		}
	}
	cout << "按下任意键退出" << endl;
	_getch();
	system("cls");
}