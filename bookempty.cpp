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
bool bookempty(vector<library>& s) {
	if (s.size() == 0)
	{
		cout << "��ǰû���鱾��Ҫ����" << endl;
		return true;
	}
	else return false;
}