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
library adbmakeboor() {
	system("cls");
	library temp;
	int number;
	string data1;
	cout << "�밴��������ʾ���������鱾����Ϣ" << endl;
	cout << "�������鱾�����" << endl;
	cin >> number;
	temp.number = number;
	cout << "�������鱾������" << endl;
	cin >> data1;
	temp.bookname = data1;
	cout << "���������ߵ�����" << endl;
	cin >> data1;
	temp.autorname = data1;
	cout << "�������鱾����Ϣ" << endl;
	cin >> data1;
	temp.imformation = data1;
	cout << "�������鱾�ļ۸�" << endl;
	cin >> number;
	temp.price = number;
	return temp;
}