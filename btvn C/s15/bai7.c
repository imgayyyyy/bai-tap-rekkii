#include<stdio.h>


int main(){
	char str[50]="gsruengnf3423!@$fenf #$";
	int chuSo=0;
	int chuCai=0;
	int kyTu=0;
	for(int i=0;i<strlen(str)-1;i++){
		if(isalpha(str[i])){
			chuCai++;
		}else if(isdigit(str[i])){
			chuSo++;
		}else{
			kyTu++;
		}
	}
	printf("chu cai : %d",chuCai);
	printf("\n chu so : %d",chuSo);
	printf("\n ky tu : %d",kyTu);
	return 0;
}
