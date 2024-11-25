#include<stdio.h>
int main(){
	int ucln;
	int number1, number2;
	
	scanf("%d %d", &number1, &number2);
	int a = number1, b= number2;

	while(number2 != 0){
		int x = number2;
		number2 = number1 % number2;
		number1 = x;
		
	//	x = number1;
	}
	
	
	
	ucln = number1;
	
	int bcnn = (a*b)/ucln;
	
	if(a == 0 || b == 0){
		printf("khong ton tai bcnn");
	}else{
		printf(" bcnn : %d", bcnn);
	}




	
	return 0;
}
