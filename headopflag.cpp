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
		return true;//��ʾ����
	}
	else if (n1 == n2||n1<=0||n2<=0)
	{
		cout << "�����ʽ����" << endl;
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
			cout << "�����ɹ�" << endl;
			Sleep(300);
		}
		else {
			cout << "����������" << endl;
			Sleep(300);
		}
		return false;
	}
}