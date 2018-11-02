#ifndef GUANGLIST_H
#define GUANGLIST_H

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#define MAXSTRLEN 40
typedef char SString[MAXSTRLEN+1]; 
typedef char AtomType;	                   // 定义原子类型为字符型  
typedef enum{
	ATOM, LIST	                          // ATOM==0:原子 LIST==1:子表                     
} ElemTag; 

typedef struct GLNode
{
	ElemTag tag;				// 公共部分,用于区分原子结点和表结点 
	union								// 原子结点和表结点的联合部分 
	{
		AtomType atom; 						// atom是原子结点的值域, AtomType由用户定义 
		struct
		{
			struct GLNode *hp,*tp;
		}ptr;								 // ptr是表结点的指针域,prt.hp和ptr.tp分别指向表头和表尾 
	}a;
} *GList, GLNode;	

#endif

