#include <stdio.h>

void changeItem(int *arr, int size, int value, int index){
	if(index<=0 || index>size){
		printf("Gia tri khong hop le!!!");
	}else{
		arr[index]=value;
	}
}

int main(){
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int value=20;
	int index=3;
	printf("Mang truoc khi cap nhat la:\n");
	for(int i=0; i<size; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	changeItem(arr, size, value, index);
	printf("Mang sau khi cap nhat la:\n");
	for(int i=0; i<size; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
}