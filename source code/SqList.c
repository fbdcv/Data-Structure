#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 

#define MaxSize 100
typedef int ElemType;

//���Ա�Ľṹ�� 
typedef struct {
	ElemType data[MaxSize];
	int length;

}SqList;

//��ʾ���Ա������ 
void ShowList(SqList* L ){
	printf("data:");
	for(int i=0;i<L->length;i++){
		printf(" %d",L->data[i]);
	}
	printf("\nlength:%d\n",L->length);
	
} 

//���Ա�Ĳ���
/*��˳���L�ĵ�i��λ�ò���Ԫ��e��ԭ�ȵ�i��λ�õ�Ԫ�ؼ������Ԫ������ƶ�
����i �ĺϷ�ȡֵ��[1��length+1] 
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

//���Ա��ɾ��
/*��˳���L�У�ɾ����i��λ�õ�Ԫ�أ�����ɾ��Ԫ�ص�ֵ��e����
����i�ĺϷ�ȡֵ��[1,length] 
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

//���Ա�İ�ֵ���� 
int LocateElem(SqList* L,ElemType e){
	for(int i=0;i<L->length;i++){
		if(L->data[i]==e){
			return i;
		}
	}
	return -1;
}


