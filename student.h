#ifndef STUDENT_H 
#define STUDENT_H

#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;		//Status 是函数返回值类型，其值是函数结果状态代码。
#define MAXSIZE 100	
						//顺序表可能达到的最大长度

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char no[8];
	char name[20];
	char class[100];
} student;

typedef student ElemType;

typedef struct {
	ElemType *elem;			//存储空间的基地址
	int length;				//当前长度
}SqList;

#endif