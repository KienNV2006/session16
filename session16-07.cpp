#include <stdio.h>

void arrange(int *arr, int size){
	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-1-i; j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	int arr[]={5,9,7,4,1,3,6,8,2};
	int size =sizeof(arr)/sizeof(arr[0]);
	printf("Mang truoc khi sap xep la:\n");
	for(int i=0; i<size; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	arrange(arr, size);
	printf("Mang sau khi sap xep la:\n");
	for(int i=0; i<size; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	return 0;
	
}