#include<stdio.h>
#include<stdbool.h>
#include"SqList.c"
typedef int ElemType;

bool func(SqList* L,ElemType s,ElemType t){
	if(!L->length||!s<t){
		return false;
	}
	int l=0;
	for(int i=0;i<L->length;i++){
		if(L->data[i]<s||L->data[i]>t){
			L->data[l++]=L->data[i];
		}
	}
	L->length=l;
	return true;
	
}

int main(){
	return 0;
}
