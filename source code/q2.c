#include "SqList.c"
#include<stdio.h>
typedef int ElemType;

void func(SqList* L){
	ElemType temp;
	for(int i=0;i<L->length/2;i++){
		temp=L->data[i];
		L->data[i]=L->data[L->length-1-i];
		L->data[L->length-1-i]=temp;		
	}
}

int main(){
	SqList l;
	ListInsert(&l,1,2);
	ListInsert(&l,2,8);
	ListInsert(&l,3,4);
	ListInsert(&l,4,6);
	ListInsert(&l,5,1);
	ShowList(&l); 
	func(&l);
	ShowList(&l);
	
	return 0;
} 
