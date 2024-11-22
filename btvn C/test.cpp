#include<stdio.h> 
int main(){
	int a;
	scanf("%d",&a);
	if(a>=1 && a <=3){
		printf("mua xuan");
	}else if(a > 3 && a <=6){
		printf("mua ha");
	}else if(a > 6 && a <=9){
		printf("mua thu");
	}else if(a > 9 && a <=12){
		printf("mua dong");
	}else{
		printf("nhap thang khong hop le");
	}
	return 0;
}
