#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<wait.h>

#define MAX 1024
#define NUM 16
int main()
{
	char *myargv[NUM];					//用来接收命令行参数
	char cmd[MAX];
	while(1){
	printf("[root@localhost RexRowe's_shell]# ");
	fgets(cmd,sizeof(cmd),stdin);
	//函数原型：char *fgets(char *buf, int bufsize, FILE *stream)
	//*buf: 字符型指针，指向用来存储所得数据的地址。
	//bufsize: 整型数据，指明存储数据的大小。
	//*stream: 文件结构体指针，将要读取的文件流。
	cmd[strlen(cmd)-1]='\0';		//为了防止输出后带空格
	int i=0;
	myargv[i++]=strtok(cmd," ");		//ls -a -b -c -d
	//strtok：将str切分成一个个子串
	//函数原型：char* strtok(char* str,constchar* delimiters);
	//str是被切割字符串，上边的代码中的" "(空格就是被切割字符串)
	//函数的返回值：当str中的字符查找到末尾时，会返回NULL

	char *ret=NULL;						
	while(ret=strtok(NULL," "))			//strtok第二次传参的时候字符串传空串就可以了
	{
		myargv[i++]=ret;
	}
	myargv[i]=NULL;
	

	//开始创建子进程
	pid_t id =fork();
	if(id==0)
	{
		execvp(myargv[0],myargv);
		exit(1);
	}//child
	else
	{
	waitpid(id,NULL,0);
	}//parent
	}
	return 0;
}