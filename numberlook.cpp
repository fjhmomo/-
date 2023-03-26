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
bool numberlook(vector<library>& s) {
	int number;
	int flag = 1;
	int i;
	cout << "请输入你需要查找的序号" << endl;
	cin >> number;
	for (i = 0; i < s.size(); i++)
	{
		if (s[i].number == number)
		{
			oklook(s[i]);
			cout << "输入任意键退出" << endl;
			_getch();
			return false;
		}
	}
	return true;
}