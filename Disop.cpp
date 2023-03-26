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
void Disop(vector<library>& s,int &number) {
	int i;
	int flag = 1;
	for (i = 0; i < s.size(); i++)
	{
		if (s[i].number == number)
		{
			s.erase(s.begin() + i);
			cout << "成功删除第" << number << "序列书本" << endl;
			flag = 0;
		}
	}
	if (flag == 1) {
		cout << "该书本不存在" << endl;
	}
	cout << "按下1继续删除,按下字母键退出删除" << endl;
}