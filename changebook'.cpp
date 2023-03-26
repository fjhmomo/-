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
bool changebook(vector<library>& s) {
	int i;
	int number;
	int flag;
	string temp1;
	int temp2;
	while (1)
	{
		cin >> number;
		system("cls");
		cout << "请输入你要修改的序号 输入0表示退出" << endl;
		numbershow(s);
		if (number == 0) break;
		for (i = 0; i < s.size(); i++)
		{
			if (s[i].number == number)
			{
				changebooktips();
				flag = makechoice();
				if (flag == 1) {
					cout << "请输入你要修改的信息" << endl;
					cin >> temp1;
					s[i].imformation = temp1;
				}
				else if (flag == 2) {
					cout << "请输入你要修改的价格" << endl;
					cin >> temp2;
					s[i].price = temp2;
				}
				else break;
			}
		}
	}
	return false;
}