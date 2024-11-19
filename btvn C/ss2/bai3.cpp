#include<stdio.h>
int main(){
	int a =1 , b=2, tong, hieu, tich;
	float thuong;
	tong = a + b;
	hieu = a-b;
	tich = a*b;
	thuong = (float) a/b;
	printf("%d",tong);
	printf("\n%d",hieu);
	printf("\n%d",tich);
	printf("\n%.2f",thuong);
	return 0;
}
