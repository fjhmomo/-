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
void headopshow(int &n1,int&n2)
{
	n1 = -1, n2 = -1;
	system("cls");
	cout << "����0 0��ʾ�˳�" << endl;
	cout << "������Ҫ�޸ĵĵ�һ��������" << endl;
	cin >> n1;
	cout << "������Ҫ�޸ĵĵڶ���������" << endl;
	cin >> n2;
}