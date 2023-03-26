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
bool headopflag(vector<library>& s, int n1, int n2) {
	if (n1 == 0 && n2 == 0)
	{
		return true;//表示结束
	}
	else if (n1 == n2||n1<=0||n2<=0)
	{
		cout << "输入格式错误" << endl;
		return false;
	}
	else {
		library temp;
		int temp1 = -1, temp2 = -1;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i].number == n1)
			{
				temp1 = i;
			}
			if (s[i].number == n2)
			{
				temp2 = i;
			}
		}
		if (temp1 != -1 || temp2 != -1)
		{
			library temp;
			temp = s[temp1];
			s[temp1] = s[temp2];
			s[temp2] = temp;
			cout << "交换成功" << endl;
			Sleep(300);
		}
		else {
			cout << "序号输入错误" << endl;
			Sleep(300);
		}
		return false;
	}
}