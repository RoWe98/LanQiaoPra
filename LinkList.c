#define _CRT_SECURE_NO_WARNINGS
// ˳���
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
	char* stu_class;  //�༶
	char* stu_id; //ѧ��
	char* stu_name;  //ѧ������
}Stu;

#define ElemType Stu    //�����������������ͣ�������int��char�Ȼ���structҲ����
#define MAXSIZE 1024    //���Ա����󳤶�

typedef struct
{
	ElemType elem[MAXSIZE];    //���Ա�չ��������ռ�
	int last;    //��¼���Ա������һ��Ԫ�ص�����elem[]�е�λ��(�±�ֵ)���ձ���Ϊ-1��
}SeqList;

SeqList L;

// ��������
void InitInfo();    //��ʼ��һЩ��Ϣ
void ShowAllInfo(); //��ʾ������Ϣ
void ShowOneStuInfo(int n); //���L�����Ϊn��ͬѧ��Ϣ
struct Student GetInfo(int n);   //�ҵ�L�����Ϊn����Ϣ������
int Locate(char* p);  //��ѧ�Ų��ң����ر��

int main()
{
	InitInfo();

	//ShowAllInfo();

	// ����Ų���(elem[Ҫ���ҵ����])
	struct Student temp = GetInfo(1);
	printf("%s\t", temp.stu_name);
	printf("%s\t", temp.stu_id);
	printf("%s\n", temp.stu_class);

	// �����ݲ���(�������ѧ��Ϊ019��ѧ��)
	char *srearch_id = "19";
	int n = Locate(srearch_id);
	ShowOneStuInfo(n);

	system("pause");

	return 0;
}

void InitInfo()
{
	printf("�ж��ٸ�ѧ����Ϣ��Ҫ¼��?:");
	scanf("%d", &L.last);
	// ����ռ䣬¼����Ϣ
	for (int i = 0; i < L.last; i++)
	{
		L.elem[i].stu_name = (char *)malloc(20);
		L.elem[i].stu_id = (char *)malloc(20);
		L.elem[i].stu_class = (char *)malloc(20);

		printf("��%d��ѧ��������:", i + 1);
		scanf("%s", L.elem[i].stu_name);
		printf("��%d��ѧ����ѧ��:", i + 1);
		scanf("%s", L.elem[i].stu_id);
		printf("��%d��ѧ���İ༶:", i + 1);
		scanf("%s", L.elem[i].stu_class);
	}
}

void ShowAllInfo()
{
	// ��ʾ��ͷ
	printf("%s\t", "����");
	printf("%s\t", "�༶");
	printf("%s\n", "ѧ��");

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
		printf("���޴���\n");
	}
	return n;
}
*/