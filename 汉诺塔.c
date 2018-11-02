/*
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void hanoi(int n, char x, char y, char z)
{
	void move(char a, int b, char c);
	if (n == 1)
		move(x,1,z);   //当n只有1个的时候直接从a移动到c
	else
	{
		hanoi(n - 1, x, z, y);            //第n-1个要从a通过c移动到b
		move(x,n,z);
		hanoi(n - 1, y, x, z);            //n-1个移动过来之后b变开始盘，b通过a移动到c，这边很难理解
	}
}

void move(char a, int b, char c)
{
	printf("\t编号为%d的圆盘从%c->%c\n", b, a, c);
}

int main()
{
	int n;
	printf("请输入要移动的块数：");
	scanf("%d", &n);
	hanoi(n, 'a', 'b', 'c');
	system("pause");
	return 0;
}

*/