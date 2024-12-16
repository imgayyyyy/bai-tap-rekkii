#include<stdio.h>

int doiValue(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}



int main(){
	int x=2,y=3;
	doiValue(&x,&y);
	printf(" %d %d",x,y);
	
	return 0;
}
