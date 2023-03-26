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
void adboperate(vector<library>& s, library temp,int flag) {
	int i;
	int n;
	int data;
	if (flag == 1)
	{	
		n = s.size();
		adboperateshow(n);//图像展示
		while (true)
		{
			cin >> data;
			if (data > n + 1)
			{
				cout << "插入失败,请选择正确的数据" << endl;
				continue;
			}
			else {
				data = data - 1;
				s.insert(s.begin() + data, temp);
				cout << "插入成功" << endl;
				break;
			}
		}
	}
	else {
		cout << "书本信息有误" << endl;
	}
}