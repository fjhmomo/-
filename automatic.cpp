#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<vector>
#include<iostream>
#include<algorithm>
#include"tou1.h"
#include"tou2.h"
using namespace std; 
void automic(vector<library>& s) {
	int flag;
	while (true)
	{
		automicchoice();//�˵�չʾ
		flag = makechoice();// ѡ����
		sbkoperate(s, flag);//��������
		if (flag == -1) break;
	}
}