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
void imformation(vector<library>& s) {
	int flag1;
	int flag2;
	while (true)
	{
		imformationshow();//菜单展示
		flag1 = makechoice();//选择菜单
		if (flag1 == 1) flag2 = numberlook(s);
		else if(flag1==2) flag2 = booknamelook(s);
		else if(flag1==3) flag2 = autornamelook(s);
		else if (flag1 == 4) flag2= changebook(s);
		else break;
		if (flag2 == 1) {
			badlook();
		}
	}

}