#include<stdio.h>


int soNguyenTo(int n){
	if(n<2){
		printf("khong phai so nguyen to");
		return false;
	}
	for (int i = 2; i * i <= n; i++) {
	    if (n % i == 0) {
	        return false;
	    }
	}

	return true;
}



int main(){
	int number_1,number_2;
	scanf("%d %d", &number_1,&number_2);
	
	
	if(soNguyenTo(number_1)){
		printf("\n%d la so nguyen to", number_1);
	}else{
		printf("\n%d khong la so nguyen to", number_1);
	}
	
	if(soNguyenTo(number_2)){
		printf("\n%d la so nguyen to", number_2);
	}else{
		printf("\n%d khong la so nguyen to", number_2);
	}
	
	
	
}
