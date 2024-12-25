#include<stdio.h>

int main(){

//	FILE *f;
	FILE *myFile = fopen("input.txt", "w");
	
	if(myFile==NULL){
		printf("khong mo duoc file");
		return 1;
	}
	
	
	
	
	fputs("gi cung duoc",myFile);
	
	
	
	
	
	
	
	
	
	char character;
	character = fgetc(myFile);
	printf("ky tu doc duoc la : %c",character);
	
	while(character != EOF){
		character = fgetc(myFile);
		printf("%c",character);
	}
	
	return 0;
}

