#include <stdio.h>

void showItem(int *arr, int size){
	for(int i=0; i<size; i++){
		printf("arr[%d]=%d\n", i, *(arr+i));
	}
}

int main(){
	int arr[6]={2,4,6,8,10,12};
	int size=sizeof(arr)/sizeof(arr[0]);
	showItem(arr, size);
	return 0;
}