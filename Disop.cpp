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
			cout << "�ɹ�ɾ����" << number << "�����鱾" << endl;
			flag = 0;
		}
	}
	if (flag == 1) {
		cout << "���鱾������" << endl;
	}
	cout << "����1����ɾ��,������ĸ���˳�ɾ��" << endl;
}