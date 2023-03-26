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
bool booknamelook(vector<library>& s) {
	string name;
	int flag = 1;
	int i;
	cout << "请输入你需要查找的书名" << endl;
	cin >> name;
	for (i = 0; i < s.size(); i++)
	{
		if (s[i].bookname == name)
		{
			oklook(s[i]);
			cout << "输入任意键退出" << endl;
			_getch();
			return false;
		}
	}
	return true;
}