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
		adboperateshow(n);//ͼ��չʾ
		while (true)
		{
			cin >> data;
			if (data > n + 1)
			{
				cout << "����ʧ��,��ѡ����ȷ������" << endl;
				continue;
			}
			else {
				data = data - 1;
				s.insert(s.begin() + data, temp);
				cout << "����ɹ�" << endl;
				break;
			}
		}
	}
	else {
		cout << "�鱾��Ϣ����" << endl;
	}
}