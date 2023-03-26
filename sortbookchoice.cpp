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
int sortbookchoice(vector<library>& s)
{
	int flag;
	char choose;
	if (bookempty(s) == true);
	else
	{
		choose = _getch();
		if (choose == '1') return 1;
		else if (choose == '0') return 0;
		else return 3;
	}
}