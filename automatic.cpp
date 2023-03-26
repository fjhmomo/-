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
		automicchoice();//菜单展示
		flag = makechoice();// 选择功能
		sbkoperate(s, flag);//交互功能
		if (flag == -1) break;
	}
}