#include<stdio.h>
int main(){
	int a,so;
	scanf("%d",&a);
	while(a>0){
		so = a % 10;
		printf(" \n%d",so);
		a/=10;
	}
	return 0;
}
