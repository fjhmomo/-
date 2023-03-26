#include<stdio.h>
#include<iostream>
using namespace std;
void adboperateshow(int n)
{
	int i;
	for (int i = 1; i <= 3; i++) cout << "*********" << endl;
	cout << "选择你要插入的位置" << endl;
	printf("你有以下位置可以选择1---%d\n请输入你需要插入的位置\n", n + 1);
}