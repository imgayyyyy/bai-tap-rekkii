#include<stdio.h>
int soHoanHao(int n){
	if(n<2){
		printf("\nkhong phai so hoan hao");
		return false;
	}
	
	int sum = 0;
	
	for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    
    return sum == n;
}



int main(){
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	if(soHoanHao(num1)){
		printf("\n %d la so hoan hao",num1);
	}else{
		printf("\n %d khong la so hoan hao",num1);
	}
	
	if(soHoanHao(num2)){
		printf("\n %d la so hoan hao",num2);
	}else{
		printf("\n %d khong la so hoan hao",num2);
	}
	
	
}





