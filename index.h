#ifndef INDEX_H
#define INDEX_H 

#define OK 1
#define ERROR 0
#define OVERFLOW -2

typedef int Status;

#define MAXSIZE 100

#include "stdio.h"
#include "malloc.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"

typedef struct{
  char no[8];
  char name[20];
  char classnumber[100];
} student;

typedef student ElemType;

typedef struct{
  ElemType *elem;
  int length;
} SqList;


void input(ElemType *e)
{
	printf("                    学号:");
	scanf("%s", e->no);
	printf("                    姓名:");
	scanf("%s", e->name);
	printf("                    班级为:");
	scanf("%s", e->classnumber);
	printf("                    ***OK***\n\n");
}

void output(ElemType *e)
{
	printf("                    学号：%-10s\n                    姓名：%-10s\n                    班级：%-10s\n\n", e->no, e->name, e->classnumber);
}

Status InitList_Sq(SqList *L) {				// 顺序表的初始化
	//构造一个空的顺序表L
	L->elem = malloc(sizeof(ElemType)*MAXSIZE);		//为顺序表分配一个大小为MAXSIZE的数组空间
	if (!L->elem)  exit(OVERFLOW);		//存储分配失败
	L->length = 0;							//空表长度为0
	return OK;
}


int LocateElem_Sq(SqList *L, ElemType e) {		//顺序表的查找
	//顺序表的查找
	int i;
	for (i = 0; i < L->length; i++)
		if (!strcmp(L->elem[i].name, e.name)) return i + 1;
	return 0;
}

Status ListInsert_Sq(SqList *L, int i, ElemType e) {		// 顺序表的插入
	//在顺序表L中第i个位置之前插入新的元素e
	//i值的合法范围是1<=i<=L.length+1
	int j;
	if (i<1 || i>L->length + 1)	return ERROR;		//i值不合法
	if (L->length == MAXSIZE)	return ERROR;		//当前存储空间已满
	for (j = L->length - 1; j >= i - 1; j--)
		L->elem[j + 1] = L->elem[j];					//插入位置及之后的元素后移
	L->elem[i - 1] = e;								//将新元素e放入第i个位置
	++L->length;									//表长增1
	return OK;
}

Status ListDelete_Sq(SqList *L, char *i, char *e) {		//算法2.4 顺序表的删除
	int j = 0;
	while (j < L->length && strcmp(L->elem[j].no, i))
		j++;
	if (j != L->length)
	{
		strcpy(e, L->elem[j].name);
		for (; j <= L->length; j++)
			L->elem[j] = L->elem[j + 1];
	}
	else return ERROR;
	--L->length;									//表长减1
	return OK;
}
void menu()
{
	printf("                                学生信息管理系统                    \n\n");
  printf("                                    主菜单：\n");
	printf("                    1.建立顺序表             "); printf("2.输入学生信息\n");
	printf("                    3.查找                   "); printf("4.插入\n");
	printf("                    5.删除                   "); printf("6.输出学生信息\n");
	printf("                    7.退出\n\n");
}


#endif 
