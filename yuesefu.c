#define _CRT_SECURE_NO_WARNINGS

#include "yuesefu.h";

int main()
{
	int i, m, n;
	printf("\n参数m,n为上限和人数:\n");
	printf("\n请输入m和n:\n");
	scanf("%d %d", &m, &n);
	creatLinkList(n);
	enterPwd(n);
	printf("\n出队的人依次是:\n");
	outList(m, n);
	return 0;
}
