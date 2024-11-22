#include<stdio.h>
int main (){
	int nam;
	scanf("%d",&nam);
	if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
		printf("nam nhuan");
	}else{
		printf("khong phai nam nhuan");
	}
	return 0;
}
