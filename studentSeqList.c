#define _CRT_SECURE_NO_WARNINGS
/*
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>

#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;		
#define MAXSIZE 100	

typedef struct {
	char no[8];
	char name[20];
	char class[100];
} student;

typedef student ElemType;

typedef struct {
	ElemType *elem;
	int length;				
}SeqList;

void input(ElemType *e)
{
	printf("学号:");
	scanf("%s", e->no);
	printf("姓名:");
	scanf("%s", e->name);
	printf("班级为:");
	scanf("%s", &e->class);
	printf("***OK***\n\n");
}

void output(ElemType *e)
{
	printf("学号：%-10s 姓名：%-10s  班级：%-10s\n\n", e->no, e->name, e->class);
}

Status InitList_Seq(SeqList *L) 
{				
	// 顺序表的初始化
	//构造一个空的顺序表L
	L->elem = malloc(sizeof(ElemType)*MAXSIZE);		//为顺序表分配一个大小为MAXSIZE的数组空间
	if (!L->elem)  exit(OVERFLOW);		//存储分配失败
	L->length = 0;							//空表长度为0
	return OK;
}

int main()
{
	SeqList L;
	int i, x;
	(InitList_Seq(&L));
	printf("请输入学生数量: ");
	scanf("%d", &x);
	for (i = 0; i < x; i++)
	{
		printf("第%d位", i+1);
		input(&L.elem[i]);
	}
	L.length = x;
	putchar('\n');
	printf("当前学生总人数为：%d\n", L.length);
	printf("第五个学生信息为： \n");
	output(&L.elem[4]);
	system("pause");
	return 0;
}

*/