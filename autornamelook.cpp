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
bool autornamelook(vector<library>& s){
	string name;
	int flag = 1;
	int i;
	int flag2 = 1;
	cout << "请输入你需要查找的作者" << endl;
	cin >>name;
	for (i = 0; i < s.size(); i++)
	{
		if (s[i].autorname == name)
		{
			oklook(s[i]);
			cout << "输入任意键退出" << endl;
			_getch();
			flag2 = 0;
		}
	}
	if (flag2 == 1)
		return true;
	else return false;
}