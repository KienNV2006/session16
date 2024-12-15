#include <stdio.h>

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a=5, b=10;
	printf("Gia tri ban dau cua a la: %d\n", a);
	printf("Gia tri ban dau cua b la: %d\n", b);
	swap(&a,&b);
	printf("Gia tri cua a sau khi hoan doi: %d\n", a);
	printf("Gia tri cua b sau khi hoan doi: %d\n",b);
	return 0;
}