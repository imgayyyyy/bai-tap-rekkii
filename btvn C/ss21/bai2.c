#include<stdio.h>

int main(){

	FILE *myFile = fopen("input.txt", "r");
	
	if(myFile==NULL){
		printf("khong mo duoc file");
		return 1;
	}
	
	
	char character;
	character = fgetc(myFile);
	printf("ky tu doc duoc la : %c",character);
	

	return 0;
}

