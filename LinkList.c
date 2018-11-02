#define _CRT_SECURE_NO_WARNINGS
// 顺序表
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
	char* stu_class;  //班级
	char* stu_id; //学号
	char* stu_name;  //学生姓名
}Stu;

#define ElemType Stu    //根据需求来定义类型，可以是int、char等或者struct也可以
#define MAXSIZE 1024    //线性表的最大长度

typedef struct
{
	ElemType elem[MAXSIZE];    //线性表展懂的数组空间
	int last;    //记录线性表中最后一个元素的数组elem[]中的位置(下标值)，空表置为-1。
}SeqList;

SeqList L;

// 函数声明
void InitInfo();    //初始化一些信息
void ShowAllInfo(); //显示所有信息
void ShowOneStuInfo(int n); //输出L中序号为n的同学信息
struct Student GetInfo(int n);   //找到L中序号为n的信息，返回
int Locate(char* p);  //按学号查找，返回编号

int main()
{
	InitInfo();

	//ShowAllInfo();

	// 按序号查找(elem[要查找的序号])
	struct Student temp = GetInfo(1);
	printf("%s\t", temp.stu_name);
	printf("%s\t", temp.stu_id);
	printf("%s\n", temp.stu_class);

	// 按内容查找(例如查找学号为019的学生)
	char *srearch_id = "19";
	int n = Locate(srearch_id);
	ShowOneStuInfo(n);

	system("pause");

	return 0;
}

void InitInfo()
{
	printf("有多少个学生信息需要录入?:");
	scanf("%d", &L.last);
	// 分配空间，录入信息
	for (int i = 0; i < L.last; i++)
	{
		L.elem[i].stu_name = (char *)malloc(20);
		L.elem[i].stu_id = (char *)malloc(20);
		L.elem[i].stu_class = (char *)malloc(20);

		printf("第%d个学生的姓名:", i + 1);
		scanf("%s", L.elem[i].stu_name);
		printf("第%d个学生的学号:", i + 1);
		scanf("%s", L.elem[i].stu_id);
		printf("第%d个学生的班级:", i + 1);
		scanf("%s", L.elem[i].stu_class);
	}
}

void ShowAllInfo()
{
	// 显示表头
	printf("%s\t", "姓名");
	printf("%s\t", "班级");
	printf("%s\n", "学号");

	for (int i = 0; i < L.last; i++)
	{
		printf("%s\t", L.elem[i].stu_name);
		printf("%s\t", L.elem[i].stu_class);
		printf("%s\n", L.elem[i].stu_id);
	}
}

void ShowOneStuInfo(int n)
{
	printf("%s\t", L.elem[n - 1].stu_name);
	printf("%s\t", L.elem[n - 1].stu_class);
	printf("%s\n", L.elem[n - 1].stu_id);
}

struct Student GetInfo(int n)
{
	struct Student ans;
	ans.stu_class = L.elem[n - 1].stu_class;
	ans.stu_id = L.elem[n - 1].stu_id;
	ans.stu_name = L.elem[n - 1].stu_name;
	return ans;
}

int Locate(char* p)
{
	int n = -1;
	for (int i = 0; i < L.last; i++)
	{
		if (strcmp(p, L.elem[i].stu_id))
		{
			n = i;
		}
	}
	if (n == -1)
	{
		printf("查无此人\n");
	}
	return n;
}
*/