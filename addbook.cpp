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
		library temp;//被插入的书本
		int rinsert;
		int flag;
		temp = adbmakeboor();//构建一本书
		rinsert = ifhave(s,temp);//判断是否有重名
		adboperate(s, temp, rinsert);//数据处理功能
		flag = adbagain();//是否继续操作
		if (flag == 1) continue;//条件判断
		else break;
	}
	system("cls");
}