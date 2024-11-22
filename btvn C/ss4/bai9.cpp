#include<stdio.h>
int main(){
	int ngay, t ,nam;
	scanf("%d %d %d", &ngay, &t, &nam);
	if(t==1 || t==3 || t==5 || t==7 || t==8 || t==10 || t==12){
		if(ngay<=31){
			printf("hop le");
		}else{
			printf("khong hop le");
		}
	}else if(t == 4 || t == 6 || t== 9 || t == 11){
		if(ngay <= 30){
			printf("hop le");
		}else{
			printf("khong hop le");
		}
	}else if(t == 2){
		if(((nam % 4 == 0 && nam % 100 != 0 ) || nam % 400 == 0) && ngay <= 29 ){
			printf("hop le");
		}else if(ngay <= 28){
			printf("hop le");
		}else{
			printf("khong hop le");
		}
	}else{
		printf("khong hop le");
	}
	return 0;
}
