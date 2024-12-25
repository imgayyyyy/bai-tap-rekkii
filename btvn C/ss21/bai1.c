#include <stdio.h>
#include <stdlib.h>

int main() {
	char kyTu[50];
	printf("moi ban nhap vao ky tu");
	fgets(kyTu,sizeof(kyTu),stdin); 
	FILE *fptr;
	fptr = fopen(" input.txt ","w");
	if(fptr == NULL){
		printf("loi mo tap tin\n");
		return 1;
	} 
	fprintf(fptr,"%s",kyTu);
	
	fclose(fptr);
	printf("da luu ky tu vao file input.txt\n");
    return 0;
}


