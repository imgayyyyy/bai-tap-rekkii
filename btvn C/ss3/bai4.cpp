#include<stdio.h>
int main(){
	float a ,b ,c;
	scanf("%f %f %f", &a, &b, &c);
	float score = ((a + b + c) / 3) ;
	printf("diem trung binh %.2f",score);
	printf("\ntong diem %.2f", a+b+c);
	return 0;
}
