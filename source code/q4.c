#include<stdio.h>
#include<stdbool.h>
#include"SqList.c"
typedef int ElemTyppe;

bool func(SqList* L,ElemType s,ElemType t){
	if(!s<t||!L->length){
		return false;
	}
	int start=0;
	int end=0;
	for(int i=0;i<L->length;i++){
		if(!start&&L->data[i]>=s){
			start=i;
		}
		if(!end&&L->data[i]<=t){
			end=i;
		}
	}
	for(int i=start;i<=start+L->length-1-end;i++){
		L->data[i]=L->data[end+1];
	}
	L->length=L->length-(end-start+1);
	return true;
} 

int main(){
	
	return 0;
}
