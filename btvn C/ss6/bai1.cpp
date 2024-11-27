#include<stdio.h>
int main(){
	int a,b,c,d,e;
	int sum;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if(a%2!=0){
		sum+=a;
	}if(b%2!=0){
		sum+=b;
	}if(c%2!=0){
		sum+=c;
	}if(d%2!=0){
		sum+=d;
	}if(e%2!=0){
		sum+=e;
	}
	printf("tong so le: %d", sum);
	return 0;
}
