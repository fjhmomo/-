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
void headop(vector<library>& s) {
	int n1, n2;
	int flag;
	while (true)
	{
		headopshow(n1, n2);//���ݽ�������
		flag = headopflag(s, n1, n2);//���ݲ���
		if (flag == 1) break;
	}
}