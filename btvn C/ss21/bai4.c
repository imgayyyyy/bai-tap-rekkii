#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	FILE *fptr;
	fptr =fopen("input.txt","r");
	if(fptr == NULL){
		printf("khong ton tai file !");
		return 1;
	}
	char shope[200];
	if(fgets(shope,sizeof(shope),fptr)!=NULL){
		printf("dong dau tien cua input.txt",shope);
	}else{
		printf("khong thay file");
	}
	fclose(fptr);
	printf("file thanh cong");
    return 0;
}


