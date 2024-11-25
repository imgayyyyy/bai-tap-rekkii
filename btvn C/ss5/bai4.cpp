#include<stdio.h>
int main(){
	int a, nhan;
	scanf("%d", &a);
	for(nhan = 1; nhan <= 10; nhan++){
		printf("\n%d x %d = %d",a,nhan,a*nhan);
	}
	return 0;
}
