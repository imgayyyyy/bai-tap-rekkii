#include<stdio.h>
int main(){
	int ucln;
	int number1, number2;
	scanf("%d %d", &number1, &number2);

	while(number2 != 0){
		int x = number2;
		number2 = number1 % number2;
		number1 = x;
		
	//	x = number1;
	}
	
	
	
	printf("\n%d",number1);




	
	return 0;
}
