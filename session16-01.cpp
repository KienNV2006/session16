#include <stdio.h>

int main(){
	int n=10;
	printf("Gia tri cua n la: %d\n", n);
	printf("Dia chi cua n la: %d\n", &n);
	int *ptr=&n;
	printf("Gia tri cua ptr la: %d\n", &ptr);
	printf("Dia chi cua ptr la: %d\n", ptr);
	return 0;
}