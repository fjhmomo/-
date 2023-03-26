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
int  ifhave(vector<library>& s,library temp)//判断是否具有相同的书籍
{
	int flag = 1;
	int i;
	//判断的依据是根据书名和序号不能重名
	for (i = 0; i < s.size(); i++)
	{
		if (s[i].number == temp.number)
		{
			flag = 0;
			break;
		}
		else if (s[i].bookname == temp.bookname)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}