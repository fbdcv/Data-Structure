#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 

#define MaxSize 100
typedef int ElemType;

//线性表的结构体 
typedef struct {
	ElemType data[MaxSize];
	int length;

}SqList;

//显示线性表的内容 
void ShowList(SqList* L ){
	printf("data:");
	for(int i=0;i<L->length;i++){
		printf(" %d",L->data[i]);
	}
	printf("\nlength:%d\n",L->length);
	
} 

//线性表的插入
/*在顺序表L的第i个位置插入元素e，原先第i个位置的元素及后面的元素向后移动
所以i 的合法取值是[1，length+1] 
*/
bool ListInsert(SqList* L,int i,ElemType e){
	if(i>=MaxSize){
		return false;
	}
	if(i<0||i>L->length+1){
		return false;
	}
	for(int j=L->length-1;j>=i-1;j--){
		L->data[j+1]=L->data[j];
	}
	L->data[i-1]=e;
	L->length++;
	return true;
	
}

//线性表的删除
/*在顺序表L中，删除第i个位置的元素，并将删除元素的值用e返回
所以i的合法取值是[1,length] 
*/
bool ListDelete(SqList* L,int i,ElemType* e){
	if(i<1||i>L->length){
		return false;
	}
	*e=L->data[i-1];
	for(int j=i;j<L->length;j++){
		L->data[j-1]=L->data[j];
	}
	L->length--;
	return true;
}

//线性表的按值查找 
int LocateElem(SqList* L,ElemType e){
	for(int i=0;i<L->length;i++){
		if(L->data[i]==e){
			return i;
		}
	}
	return -1;
}


