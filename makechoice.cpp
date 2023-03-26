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
int makechoice() {
	char choose;
	while (true)
	{
		choose= _getch();
		if (choose == '1') return 1;
		else if (choose == '2') return 2;
		else if (choose == '3') return 3;
		else if (choose == '4') return 4;
		else if (choose == '5') return 5;
		else return -1;
	}
}