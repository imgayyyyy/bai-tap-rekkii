#include<stdio.h>
int main(){
	int thang,nam,ngay;
	printf("nhap thang");
	scanf("%d", &thang);
	printf("nhap nam");
	scanf("%d", &nam);
	
	if((nam%4==0&&nam%100!=0)||(nam%400==0)){
		if(thang > 0 && thang<=12 ){
			if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
				ngay=31;
			}else if(thang==4||thang==6||thang==9||thang==11){
				ngay=30;
			}else{
				ngay=29;
			}
			
		}else{
			printf("khong hop le");
		}
	}else{
		if(thang > 0 && thang<=12  ){
			if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
				ngay=31;
			}else if(thang==4||thang==6||thang==9||thang==11){
				ngay=30;
			}else{
				ngay=28;
			}
			
		}else{
			printf("khong hop le");
		}
	}
	
	
	
	printf("%d",ngay);
	

	return 0;
}
