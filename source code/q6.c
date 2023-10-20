#include<stdio.h>
#include"SqList.c"

void func(SqList* L){
	//采用保留法
	int l=1;
	for(int i=1;i<L->length-1;i++){
		//识别相同元素段（相同元素段中的元素与上一个或者下一个元素相同） 
		if(L->data[i]==L->data[i+1]||L->data[i]==L->data[i-1]){
			//只保留相同元素段中的第一个元素 
			if(L->data[i-1]!=L->data[i]){
					L->data[l++]=L->data[i];
			}
		}else{
				L->data[l++]=L->data[i];
		}
	}
	//这样就解决了[1,length-2]区间的判断,0与length-1单独判断
	//0一定是保留的元素，所以只判断length-1是否要保留就可以了 
	if(L->length>=2&&L->data[L->length-1]!=L->data[L->length-2]){
		L->data[l++]=L->data[L->length-1];
	}
	L->length=l;
}


int main(){
	return 0;
} 
