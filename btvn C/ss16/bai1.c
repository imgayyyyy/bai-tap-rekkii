#include<stdio.h>
int main(){
	int a=22;
	int *ptr;
	ptr = &a;
	printf("gia tri cua a la : %d\n",a);
	printf("dia chi cua bien a la : %d\n",&ptr);
	printf("gia tri cua bien ma con tro tro toi la : %d",*ptr);
	return 0;
	
}
