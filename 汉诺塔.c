/*
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void hanoi(int n, char x, char y, char z)
{
	void move(char a, int b, char c);
	if (n == 1)
		move(x,1,z);   //��nֻ��1����ʱ��ֱ�Ӵ�a�ƶ���c
	else
	{
		hanoi(n - 1, x, z, y);            //��n-1��Ҫ��aͨ��c�ƶ���b
		move(x,n,z);
		hanoi(n - 1, y, x, z);            //n-1���ƶ�����֮��b�俪ʼ�̣�bͨ��a�ƶ���c����ߺ������
	}
}

void move(char a, int b, char c)
{
	printf("\t���Ϊ%d��Բ�̴�%c->%c\n", b, a, c);
}

int main()
{
	int n;
	printf("������Ҫ�ƶ��Ŀ�����");
	scanf("%d", &n);
	hanoi(n, 'a', 'b', 'c');
	system("pause");
	return 0;
}

*/