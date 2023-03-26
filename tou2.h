#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;
typedef struct{
	string bookname;//书名
	string autorname;//作者名字
	string imformation;//书本信息
	int number;//序号
	int price;//价格
}*LiBrary, library;
//基础功能
bool bookempty(vector<library>&s);//书本是否为空
void initial(vector<library>&s);//初始化数据
int makechoice();//选择功能
void  MainMenu();//操作提示界面
void Libraryshow(vector<library>& s);//图书本展示
void numbershow(vector<library>s);//序号展示
void imformation(vector<library>& s);//信息功能
//增加功能
void AddBook(vector<library>& s);//添加书本
library adbmakeboor();//构建一个书本
int  ifhave(vector<library>& s, library temp);//是否具有重名书本
void adboperate(vector<library>& s, library temp, int n);//添加书本
void adboperateshow(int n);//书本展示界面
int adbagain();
//排序功能
int sortbookchoice(vector<library>& s);//选择功能选择
void AddBook(vector<library>& s);//添加书本
void sbktips();
//手动排序
void headchoose(vector<library>& s);//手动排序
void headchooseshow();//图像展示
void headopshow(int& n1, int& n2);//手动排序交互
bool headopflag(vector<library>& s, int n1, int n2);//数据处理
//自动排序
void automic(vector<library>& s);//自动排序
void automicchoice();//自动选择菜单
void sortbook(vector<library>& s);//书本排序
void headop(vector<library>& s);//手动操作
void sbkoperate(vector<library>& s, int flag);//自动功能选择
//书本删除
void DispBook(vector<library>& s);//书本的删除
void Disbookshow(int &number);//删除菜单
void Disop(vector<library>& s,int &number);//删除操作
//书本信息查询
void imformation(vector<library>& s);//信息系统
void imformationshow();//菜单
bool numberlook(vector<library>& s);//序号搜索
bool autornamelook(vector<library>& s);//人名搜索
bool booknamelook(vector<library>& s);//书名搜索
void oklook(library s);//成功搜索
bool changebook(vector<library>& s);//信息修改
void changebooktips();//修改菜单
void badlook();//错误寻找