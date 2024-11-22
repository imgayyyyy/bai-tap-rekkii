#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	if ( a < 0){
		printf("so am");
	}else if(a > 0){
		printf("so duong");
	}else{
		printf("bang khong");
	}
	return 0;
}
