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
	cout << "����������Ҫ���ҵ�����" << endl;
	cin >> name;
	for (i = 0; i < s.size(); i++)
	{
		if (s[i].bookname == name)
		{
			oklook(s[i]);
			cout << "����������˳�" << endl;
			_getch();
			return false;
		}
	}
	return true;
}