#ifndef YUESEFU_H
#define YUESEFU_H

#include "stdio.h"
#include "malloc.h"

typedef struct LNode
{
	int num, pwd; //num»Àµƒ–Ú∫≈ pwd√‹¬Î
	struct  LNode *next;
}LNode;

struct  LNode *head, *p, *pt;

int creatLinkList(int n)
{
	int i;
	head = (struct LNode*)malloc(sizeof(struct LNode));
	if (!head)
	{
		return 0;
	}
	p = head;
	for (i = 1; i < n; i++)
	{
		pt = (struct LNode*)malloc(sizeof(struct LNode));
		if (!pt)
		{
			return 0;
		}
		p->next = pt;
		p = pt;
	}
	p->next = head;
	pt = head;
	return 0;
}

int enterPwd(int n)
{
	int i, j;
	printf("\n«Î ‰»Î√‹¬Î:\n");
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &j);
		pt->num = i;
		pt->pwd = j;
		pt = pt->next;
	}
	pt = p;
	return j;
}

int outList(int m, int n)
{
	int i, a;
	for (i = 1; i <= n; i++)
	{
		for (a = 1; a < m; a++)
		{
			pt = pt->next;
		}
		p = pt->next;
		m = p->pwd;
		printf("%d ", p->num);
		pt->next = p->next;
		free(p);
	}
	return 0;
}


#endif // !YUESEFU_H

