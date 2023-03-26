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
		sbktips();//菜单界面
		flag = sortbookchoice(s);//菜单界面
		if (flag == 1) automic(s);//自动排序
		else if (flag == 0) headchoose(s);//手动排序
		else if (flag == 3) break;
	}
}