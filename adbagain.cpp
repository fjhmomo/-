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
int  adbagain()
{
	cout << "����1����,������������ʾ�˳�" << endl;
	char choice;
	choice = _getch();
	if (choice == '1')
	{
		return 1;
	}
	else return 0;
}