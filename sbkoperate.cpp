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
#include<algorithm>
using namespace std;
int Cmp1(const library s1, library s2)
{
	return s1.price > s2.price;
}
bool Cmp2(const library s1, library s2)
{
	return s1.autorname < s2.autorname;
}
int Cmp3(const library s1, library s2)
{
	return s1.price < s2.price;
}
int Cmp4(const library s1, library s2)
{
	return s1.number > s2.number;
}
void sbkoperate(vector<library>& s, int flag) {
	int x=1;
	if (flag == 1) Libraryshow(s);
	else if (flag == 2) sort(s.begin(), s.end(), Cmp1),x=0; 
	else if (flag == 3) sort(s.begin(), s.end(), Cmp2),x=0;
	else if (flag == 4) sort(s.begin(), s.end(), Cmp3),x=0;
	else if (flag == 5) sort(s.begin(), s.end(), Cmp4),x=0;
	if (x == 0) {
		cout << "排序成功,按下任意键继续进行" << endl;
		_getch();
		system("cls");
		Sleep(300);
	}
}