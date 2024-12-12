#include<stdio.h>
#include<string.h>
int main(){

	char string[50]="abcd";
	int length=strlen(string);
	for(int i=0;i<length;i++){
		printf("%c",string[i]);
	}
	printf("\n %d",length);
}
