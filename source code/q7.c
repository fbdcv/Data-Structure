#include<stdio.h>
#include<stdlib.h>
#include"SqList.c"

SqList* func(SqList s1,SqList s2){
	int x1=0;int x2=0;
	SqList* L=(SqList*)malloc(sizeof(SqList));
	L->length=0;
	while(x1<s1.length&&x2<s2.length){
		if(s1.data[x1]<s2.data[x2]){
			L->data[L->length++]=s1.data[x1];
			x1++;
		}else{
			L->data[L->length++]=s2.data[x2];
			x2++;
		}
	} 
	if(x1==s1.length){
		for(int i=x2;i<s2.length;i++){
			L->data[L->length++]=s2.data[i];
		}
	}else{
		for(int i=x1;i<s1.length;i++){
			L->data[L->length++]=s1.data[i];
		}
	}
	return L;
} 

int main(){
	
	return 0;
}
