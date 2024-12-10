#include<stdio.h>
int sum(int a,int b){
	return a+b;
}



int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int tong=sum(a,b);
	
	printf("tong 2 so la : %d",tong);
}
