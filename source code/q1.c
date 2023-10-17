#include<stdio.h>
#include "SqList.c"
int main(){
	
	//初始化顺序表{1，2，3，4} 
	SqList l;
	ListInsert(&l,1,1);
	ListInsert(&l,2,2);
	ListInsert(&l,3,3);
	ListInsert(&l,4,4);
	ShowList(&l);
	printf("\n"); 
	
	//删除顺序表中的第3个元素 
	ElemType e=0;
	ListDelete(&l,3,&e);
    ShowList(&l);
    printf("e:%d\n",e);
    printf("\n"); 
    
    //按值查找元素对应的序号 
    printf("search index of 1: %d\n",LocateElem(&l,1));
    printf("search index of 2: %d\n",LocateElem(&l,2));
    printf("search index of 3: %d\n",LocateElem(&l,3));
    printf("search index of 4: %d\n",LocateElem(&l,4));
	
	return 0;
} 
