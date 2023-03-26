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
int main()
{
	vector<library>total;//定义空的vector
	initial(total);//初始化函数
	//提示界面
	while (true)                                   
	{
		MainMenu();//展示界面
		char choice;
		choice = _getch();
		if (choice == '1') {
			Libraryshow(total);
		}
		else if (choice == '2') {
			AddBook(total);
		}
		else if (choice == '3')
		{
			DispBook(total);
		}
		else if (choice == '0') {
			break;
		}
		else if (choice == '4')
		{
			sortbook(total);
		}
		else if (choice == '5')
		{
			imformation(total);
		}
		else if (choice == '6')
		{
			break;
		}
		else continue;
	}
	return 0;
}
