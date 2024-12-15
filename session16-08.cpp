#include <stdio.h>
#include <string.h>

void reverseStr(char *inputString, char *reverseString){
	int length=strlen(inputString);
	for(int i=0; i<length; i++){
		*(reverseString+i)=*(inputString+length-1-i);
	}
	*(reverseString+length)='\0';
}

int main(){
	char inputString[100];
	char reverseString[100];
	fgets(inputString, 100, stdin);
	printf("Chuoi khi chua dao nguoc la: %s\n", inputString);
	reverseStr(inputString, reverseString);
	printf("Chuoi dao nguoc la: %s", reverseString);
	return 0;
}