#define _CRT_SECURE_NO_WARNINGS

#include "yuesefu.h";

int main()
{
	int i, m, n;
	printf("\n����m,nΪ���޺�����:\n");
	printf("\n������m��n:\n");
	scanf("%d %d", &m, &n);
	creatLinkList(n);
	enterPwd(n);
	printf("\n���ӵ���������:\n");
	outList(m, n);
	return 0;
}
