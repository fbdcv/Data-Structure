#include<stdio.h>
#include"SqList.c"

void func(SqList* L){
	//���ñ�����
	int l=1;
	for(int i=1;i<L->length-1;i++){
		//ʶ����ͬԪ�ضΣ���ͬԪ�ض��е�Ԫ������һ��������һ��Ԫ����ͬ�� 
		if(L->data[i]==L->data[i+1]||L->data[i]==L->data[i-1]){
			//ֻ������ͬԪ�ض��еĵ�һ��Ԫ�� 
			if(L->data[i-1]!=L->data[i]){
					L->data[l++]=L->data[i];
			}
		}else{
				L->data[l++]=L->data[i];
		}
	}
	//�����ͽ����[1,length-2]������ж�,0��length-1�����ж�
	//0һ���Ǳ�����Ԫ�أ�����ֻ�ж�length-1�Ƿ�Ҫ�����Ϳ����� 
	if(L->length>=2&&L->data[L->length-1]!=L->data[L->length-2]){
		L->data[l++]=L->data[L->length-1];
	}
	L->length=l;
}


int main(){
	return 0;
} 
