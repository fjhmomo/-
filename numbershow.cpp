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
void numbershow(vector<library>s) {
	int i;
	int l = s.size();
	system("cls");
	cout << " 当前共有" << l << "种选择" << endl;
	cout << "书本的序号分别是" << endl;
	for (i = 0; i < s.size(); i++)
	{
		cout << s[i].number << endl;
	}
}