#include<stdio.h>
int main(){
	int a;
	
	scanf("%d", &a);
	if(a<2){
		printf("ko phai so nguyen to");
	}else{
		for(int x=2;a > (x/2);x++){
			if(a%x==0){
				printf("ko phai so nguyen to");
				
			}else{
				printf("la so nguyen to");
			}
		}
	}
			
	return 0;

	
}



