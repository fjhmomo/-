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
void Libraryshow(vector<library>& s) {
	system("cls");
	if (s.size() == 0)
	{
		cout <<" ��ǰû���鱾 " << endl;
	}
	else {
		//cout << "��� �鱾����  ����  ������Ϣ����  �۸�";
		for (int i = 0; i < s.size(); i++)
		{
			cout << "���:  "<<s[i].number << endl;
			cout << "�鱾����:  "<<s[i].bookname << endl;
			cout << "����:  " << s[i].autorname << endl;
			cout <<"������Ϣ����:  "<< s[i].imformation << endl;
			cout <<"�۸�:  "<< s[i].price << endl;
			cout << "----------------------------------------------------------------" << endl;
		}
	}
	cout << "����������˳�" << endl;
	_getch();
	system("cls");
}