#include "SqList.c"
#include<stdio.h>
#include<stdbool.h>
typedef int ElemType ;

bool func(SqList* L,ElemType* e){
	if(!L->length){
		return false;
	}
	int min=0;
	for(int i=0;i<L->length;i++){
		if(L->data[i]<L->data[min]){
			min=i;
		}
	}
	L->data[min] = L->data[L->length-1];
	return true;
	
	
}

int main(){
	
	SqList l;
	ListInsert(&l,1,2);
	ListInsert(&l,2,8);
	ListInsert(&l,3,4);
	ListInsert(&l,4,6);
	ListInsert(&l,5,1);
	ShowList(&l); 
	int e=0;
	func(&l,&e);
	printf("e:%d\n",e);
	ShowList(&l);
	
	
	
	return 0;
}
