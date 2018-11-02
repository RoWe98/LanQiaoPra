#include "index.h"

int main()
{
	SqList L;
	int i, temp, a, choose, x;
	char flag;
  ElemType b, e;
	char res[20], c[10];
  system("clear");
	menu();
	choose = -1;
	while (choose != 7)
	{
		printf("                    请选择:");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			if (InitList_Sq(&L))						//创建顺序表
				printf("                    成功建立顺序表\n\n");
			else
				printf("                    顺序表建立失败\n\n");
			sleep(2);
      system("clear");
      menu();
      break;
		case 2:
			printf("                    请输入学生数量<100:");
			scanf("%d", &x);
			for (i = 0; i < x; i++)
			{
				printf("                    第%d位:\n", i + 1);
				input(&L.elem[i]);
			}
			L.length = x;
			putchar('\n');
      printf("                    录入成功!\n");
      sleep(2);
      system("clear");
      menu();
			break;
		case 3:										//顺序表的查找
			printf("                    请输入所要查找的学生姓名:");
			scanf("%s", e.name);
			temp = LocateElem_Sq(&L, e);
			if (temp != 0)
			{
				printf("                    %s是第%d位同学.\n\n", e.name, temp);
				printf("                    该学生信息如下：\n");
				output(&L.elem[temp - 1]);
			}
			else
				printf("                    查找失败！没有此同学，检查是否输入正确\n\n");
			sleep(2);
      system("clear");
      menu();
      break;
		case 4:										//顺序表的插入
			printf("                    请输入一个数，代表插入的位置:");
			scanf("%d", &a);
			printf("                    请输入所要插入学生的信息:\n");
			printf("                    学号:");
			scanf("%s", b.no);
			printf("                    姓名:");
			scanf("%s", b.name);
			printf("                    班级:");
			scanf("%s", b.classnumber);
			if (ListInsert_Sq(&L, a, b))
				printf("                    插入成功.\n\n");
			else
				printf("                    插入失败.\n\n");
			sleep(2);
      system("clear");
      menu();
      break;
		case 5:										//顺序表的删除
			printf("                    请输入所要删除的学生学号:");
			scanf("%s", c);
			if (ListDelete_Sq(&L, c, res))
				printf("                    删除成功.\n被删除的学生是:%s\n\n", res);
			else
				printf("                    删除失败.\n\n");
			sleep(2);
      system("clear");
      menu();
      break;
		case 6:			//顺序表的输出
			printf("                    当前学生总人数为：%d\n", L.length);
			printf("                    当前顺序表为:\n");
			for (i = 0; i < L.length; i++)
				output(&L.elem[i]);
			printf("\n");
      printf("                    继续？(y/n):");
      scanf("%s",&flag);
      if(flag == 'y')
      {
        system("clear");
        menu();
        break;
      }
      else
      {
        break;
      }
      break;
		case 7:
			break;
		}
	}
	return 0;
}



