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
	printf("ѧ��:");
	scanf("%s", e->no);
	printf("����:");
	scanf("%s", e->name);
	printf("�༶Ϊ:");
	scanf("%s", &e->class);
	printf("***OK***\n\n");
}

void output(ElemType *e)
{
	printf("ѧ�ţ�%-10s ������%-10s  �༶��%-10s\n\n", e->no, e->name, e->class);
}

Status InitList_Seq(SeqList *L) 
{				
	// ˳���ĳ�ʼ��
	//����һ���յ�˳���L
	L->elem = malloc(sizeof(ElemType)*MAXSIZE);		//Ϊ˳������һ����СΪMAXSIZE������ռ�
	if (!L->elem)  exit(OVERFLOW);		//�洢����ʧ��
	L->length = 0;							//�ձ���Ϊ0
	return OK;
}

int main()
{
	SeqList L;
	int i, x;
	(InitList_Seq(&L));
	printf("������ѧ������: ");
	scanf("%d", &x);
	for (i = 0; i < x; i++)
	{
		printf("��%dλ", i+1);
		input(&L.elem[i]);
	}
	L.length = x;
	putchar('\n');
	printf("��ǰѧ��������Ϊ��%d\n", L.length);
	printf("�����ѧ����ϢΪ�� \n");
	output(&L.elem[4]);
	system("pause");
	return 0;
}

*/