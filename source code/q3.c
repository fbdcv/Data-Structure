#include "SqList.c"
#include<stdio.h>

void func(SqList* L,ElemType e){
	int j=0;
	for(int i=0;i<L->length;i++){
		if(L->data[i]!=e){
			L->data[j++]=L->data[i];
		}
	}
	L->length=j;
}

int main(){
	
	
	
	
	return 0;
}
