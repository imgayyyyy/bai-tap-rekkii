#include<stdio.h>

int main(){
	char inputString[50],reverseString[50],*inputStringPtr=inputString;
	printf("nhap vao chuoi : ");
	fgets(inputString,sizeof(inputString),stdin);
	int length = (int)strlen(inputString);
	reverseString[length-1] = '\0';
	length=(int)strlen(inputString);
	for(int i=length-1;i>=0;i--){
		reverseString[length -1 -i]=*(inputStringPtr+i);
	}
	
	printf("chuoi reverseString :%s",reverseString);
	
	return 0;
}
