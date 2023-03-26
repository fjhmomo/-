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
void headchoose(vector<library>& s) {
	int flag;
	while (true)
	{
		flag = makechoice();
		if (flag==1)
		{
			Libraryshow(s);
		}
		else if (flag==2)
		{
			headop(s);
		}
		else {
			system("cls");
			break;
		}
	}
}