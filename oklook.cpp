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
void oklook(library s) {
	system("cls");
	cout << "书本信息" << endl;
	cout << s.number << endl;
	cout << s.autorname << endl;
	cout << s.bookname << endl;
	cout << s.imformation << endl;
	cout << s.price << endl;
	cout << "-----------------------------------" << endl;
}