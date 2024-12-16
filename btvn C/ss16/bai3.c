#include<stdio.h>
int sum(int *x,int *y){
	int sum = *x+*y;
	printf("%d",sum);
}
int main(){
	int a=2,b=3;
	sum(&a,&b);
	return 0;
}
