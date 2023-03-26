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
		numbershow(s);//菜单展示
		Disbookshow(number);//交互功能
		flag = makechoice();//选择菜单
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