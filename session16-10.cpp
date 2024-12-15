#include <stdio.h>

void addItem(int *arr, int *size, int index){
	for(int i=index-1; i<*size; i++){
		arr[i]=arr[i+1];
	}
	(*size)--;
}

int main(){
	int arr[]={1,2,3,4,5,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int index=3;
	printf("Mang ban dau la:\n");
	for(int i=0; i<size; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	addItem(arr, &size, index);
	printf("Mang sau khi xoa phan tu la:\n");
	for(int i=0; i<size; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
	
}