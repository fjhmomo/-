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
void AddBook(vector<library>& s) {
	while (true) {
		library temp;//��������鱾
		int rinsert;
		int flag;
		temp = adbmakeboor();//����һ����
		rinsert = ifhave(s,temp);//�ж��Ƿ�������
		adboperate(s, temp, rinsert);//���ݴ�����
		flag = adbagain();//�Ƿ��������
		if (flag == 1) continue;//�����ж�
		else break;
	}
	system("cls");
}