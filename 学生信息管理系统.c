

#include"student.h"


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
	printf("ѧ�ţ�%-10s ������%-10s  �ɼ���%-10s\n\n", e->no, e->name, e->class);
}

Status InitList_Sq(SqList *L) {				// ˳���ĳ�ʼ��
	//����һ���յ�˳���L
	L->elem = malloc(sizeof(ElemType)*MAXSIZE);		//Ϊ˳������һ����СΪMAXSIZE������ռ�
	if (!L->elem)  exit(OVERFLOW);		//�洢����ʧ��
	L->length = 0;							//�ձ���Ϊ0
	return OK;
}


int LocateElem_Sq(SqList *L, ElemType e) {		//˳���Ĳ���
	//˳���Ĳ���
	int i;
	for (i = 0; i < L->length; i++)
		if (!strcmp(L->elem[i].name, e.name)) return i + 1;
	return 0;
}

Status ListInsert_Sq(SqList *L, int i, ElemType e) {		// ˳���Ĳ���
	//��˳���L�е�i��λ��֮ǰ�����µ�Ԫ��e
	//iֵ�ĺϷ���Χ��1<=i<=L.length+1
	int j;
	if (i<1 || i>L->length + 1)	return ERROR;		//iֵ���Ϸ�
	if (L->length == MAXSIZE)	return ERROR;		//��ǰ�洢�ռ�����
	for (j = L->length - 1; j >= i - 1; j--)
		L->elem[j + 1] = L->elem[j];					//����λ�ü�֮���Ԫ�غ���
	L->elem[i - 1] = e;								//����Ԫ��e�����i��λ��
	++L->length;									//����1
	return OK;
}

Status ListDelete_Sq(SqList *L, char *i, char *e) {		//�㷨2.4 ˳����ɾ��
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
	--L->length;									//����1
	return OK;
}
void menu()
{
	printf("                        ********�������ѧ�뼼��***********        \n\n");
	printf("                                ѧ����Ϣ����ϵͳ                    \n\n");
	printf("���˵���\n");
	printf("  1.����˳���             "); printf("2.����ѧ����Ϣ\n");
	printf("  3.����                   "); printf("4.����\n");
	printf("  5.ɾ��                   "); printf("6.���ѧ����Ϣ\n");
	printf("  7.�˳�\n\n");
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
		printf("��ѡ��:");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			if (InitList_Sq(&L))						//����˳���
				printf("�ɹ�����˳���\n\n");
			else
				printf("˳�����ʧ��\n\n");
			break;
		case 2:
			printf("������ѧ������<100:");
			scanf("%d", &x);
			for (i = 0; i < x; i++)
			{
				printf("��%dλ:\n", i + 1);
				input(&L.elem[i]);
			}
			L.length = x;
			putchar('\n');
			break;
		case 3:										//˳���Ĳ���
			printf("��������Ҫ���ҵ�ѧ������:");
			scanf("%s", e.name);
			temp = LocateElem_Sq(&L, e);
			if (temp != 0)
			{
				printf("%s�ǵ�%dλͬѧ.\n\n", e.name, temp);
				printf("��ѧ����Ϣ���£�\n");
				output(&L.elem[temp - 1]);
			}
			else
				printf("����ʧ�ܣ�û�д�ͬѧ������Ƿ�������ȷ\n\n");
			break;
		case 4:										//˳���Ĳ���
			printf("������һ��������������λ��:");
			scanf("%d", &a);
			printf("��������Ҫ����ѧ������Ϣ:\n");
			printf("ѧ��:");
			scanf("%s", b.no);
			printf("����:");
			scanf("%s", b.name);
			printf("�ɼ�:");
			scanf("%d", &b.class);
			if (ListInsert_Sq(&L, a, b))
				printf("����ɹ�.\n\n");
			else
				printf("I����ʧ��.\n\n");
			break;
		case 5:										//˳����ɾ��
			printf("��������Ҫɾ����ѧ��ѧ��:");
			scanf("%s", c);
			if (ListDelete_Sq(&L, c, res))
				printf("ɾ���ɹ�.\n��ɾ����ѧ����:%s\n\n", res);
			else
				printf("ɾ��ʧ��.\n\n");
			break;
		case 6:			//˳�������
			printf("��ǰѧ��������Ϊ��%d\n", L.length);
			printf("��ǰ˳���Ϊ:\n");
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



