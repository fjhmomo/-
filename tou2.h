#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;
typedef struct{
	string bookname;//����
	string autorname;//��������
	string imformation;//�鱾��Ϣ
	int number;//���
	int price;//�۸�
}*LiBrary, library;
//��������
bool bookempty(vector<library>&s);//�鱾�Ƿ�Ϊ��
void initial(vector<library>&s);//��ʼ������
int makechoice();//ѡ����
void  MainMenu();//������ʾ����
void Libraryshow(vector<library>& s);//ͼ�鱾չʾ
void numbershow(vector<library>s);//���չʾ
void imformation(vector<library>& s);//��Ϣ����
//���ӹ���
void AddBook(vector<library>& s);//����鱾
library adbmakeboor();//����һ���鱾
int  ifhave(vector<library>& s, library temp);//�Ƿ���������鱾
void adboperate(vector<library>& s, library temp, int n);//����鱾
void adboperateshow(int n);//�鱾չʾ����
int adbagain();
//������
int sortbookchoice(vector<library>& s);//ѡ����ѡ��
void AddBook(vector<library>& s);//����鱾
void sbktips();
//�ֶ�����
void headchoose(vector<library>& s);//�ֶ�����
void headchooseshow();//ͼ��չʾ
void headopshow(int& n1, int& n2);//�ֶ����򽻻�
bool headopflag(vector<library>& s, int n1, int n2);//���ݴ���
//�Զ�����
void automic(vector<library>& s);//�Զ�����
void automicchoice();//�Զ�ѡ��˵�
void sortbook(vector<library>& s);//�鱾����
void headop(vector<library>& s);//�ֶ�����
void sbkoperate(vector<library>& s, int flag);//�Զ�����ѡ��
//�鱾ɾ��
void DispBook(vector<library>& s);//�鱾��ɾ��
void Disbookshow(int &number);//ɾ���˵�
void Disop(vector<library>& s,int &number);//ɾ������
//�鱾��Ϣ��ѯ
void imformation(vector<library>& s);//��Ϣϵͳ
void imformationshow();//�˵�
bool numberlook(vector<library>& s);//�������
bool autornamelook(vector<library>& s);//��������
bool booknamelook(vector<library>& s);//��������
void oklook(library s);//�ɹ�����
bool changebook(vector<library>& s);//��Ϣ�޸�
void changebooktips();//�޸Ĳ˵�
void badlook();//����Ѱ��