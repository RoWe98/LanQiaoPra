#ifndef STUDENT_H 
#define STUDENT_H

#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;		//Status �Ǻ�������ֵ���ͣ���ֵ�Ǻ������״̬���롣
#define MAXSIZE 100	
						//˳�����ܴﵽ����󳤶�

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
	ElemType *elem;			//�洢�ռ�Ļ���ַ
	int length;				//��ǰ����
}SqList;

#endif