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
void sortbook(vector<library>& s)
{
	int flag;
	while (true)
	{
		sbktips();//�˵�����
		flag = sortbookchoice(s);//�˵�����
		if (flag == 1) automic(s);//�Զ�����
		else if (flag == 0) headchoose(s);//�ֶ�����
		else if (flag == 3) break;
	}
}