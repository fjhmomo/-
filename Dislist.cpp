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
void DispBook(vector<library>& s) {
	int number;;
	int flag;
	while (true)
	{
		int flag = 1;
		numbershow(s);//�˵�չʾ
		Disbookshow(number);//��������
		flag = makechoice();//ѡ��˵�
		if (flag==1)
		{
			Disop(s, number);
			continue;
		}
		else
		{
			return;
		}
	}
}