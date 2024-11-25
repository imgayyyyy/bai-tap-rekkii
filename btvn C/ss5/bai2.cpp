#include<stdio.h>
int main(){
	int a = 22;
	int i;
	scanf("%d",&i);
	while(i != a){
		printf("nhap lai");
		scanf("%d", &i);
	}
	printf("\ndung roi");
	return 0;
}
