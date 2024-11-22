#include<stdio.h>
int main(){
	int a, b ,c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b > c && c + a > b && b + c > a){
		printf("la 3 canh tam giac");
	}else{
		printf("khong phair 3 canh tam giac");
	}
	return 0;
}
