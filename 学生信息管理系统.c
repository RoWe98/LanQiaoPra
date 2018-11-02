

#include"student.h"


void input(ElemType *e)
{
	printf("学号:");
	scanf("%s", e->no);
	printf("姓名:");
	scanf("%s", e->name);
	printf("班级为:");
	scanf("%s", &e->class);
	printf("***OK***\n\n");
}

void output(ElemType *e)
{
	printf("学号：%-10s 姓名：%-10s  成绩：%-10s\n\n", e->no, e->name, e->class);
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
	printf("                        ********计算机科学与技术***********        \n\n");
	printf("                                学生信息管理系统                    \n\n");
	printf("主菜单：\n");
	printf("  1.建立顺序表             "); printf("2.输入学生信息\n");
	printf("  3.查找                   "); printf("4.插入\n");
	printf("  5.删除                   "); printf("6.输出学生信息\n");
	printf("  7.退出\n\n");
}
int main()
{
	SqList L;
	int i, temp, a, choose, x;
	ElemType b, e;
	char res[20], c[10];
	menu();
	choose = -1;
	while (choose != 7)
	{
		printf("请选择:");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			if (InitList_Sq(&L))						//创建顺序表
				printf("成功建立顺序表\n\n");
			else
				printf("顺序表建立失败\n\n");
			break;
		case 2:
			printf("请输入学生数量<100:");
			scanf("%d", &x);
			for (i = 0; i < x; i++)
			{
				printf("第%d位:\n", i + 1);
				input(&L.elem[i]);
			}
			L.length = x;
			putchar('\n');
			break;
		case 3:										//顺序表的查找
			printf("请输入所要查找的学生姓名:");
			scanf("%s", e.name);
			temp = LocateElem_Sq(&L, e);
			if (temp != 0)
			{
				printf("%s是第%d位同学.\n\n", e.name, temp);
				printf("该学生信息如下：\n");
				output(&L.elem[temp - 1]);
			}
			else
				printf("查找失败！没有此同学，检查是否输入正确\n\n");
			break;
		case 4:										//顺序表的插入
			printf("请输入一个数，代表插入的位置:");
			scanf("%d", &a);
			printf("请输入所要插入学生的信息:\n");
			printf("学号:");
			scanf("%s", b.no);
			printf("姓名:");
			scanf("%s", b.name);
			printf("成绩:");
			scanf("%d", &b.class);
			if (ListInsert_Sq(&L, a, b))
				printf("插入成功.\n\n");
			else
				printf("I插入失败.\n\n");
			break;
		case 5:										//顺序表的删除
			printf("请输入所要删除的学生学号:");
			scanf("%s", c);
			if (ListDelete_Sq(&L, c, res))
				printf("删除成功.\n被删除的学生是:%s\n\n", res);
			else
				printf("删除失败.\n\n");
			break;
		case 6:			//顺序表的输出
			printf("当前学生总人数为：%d\n", L.length);
			printf("当前顺序表为:\n");
			for (i = 0; i < L.length; i++)
				output(&L.elem[i]);
			printf("\n");
			break;
		case 7:
			printf("********************************END************************************\n");
			break;
		}
	}
	return 0;
}



