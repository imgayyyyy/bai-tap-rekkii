#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t ==10 || t == 12){
		printf("thang co 31 ngay");
	}else if(t == 4 || t == 6 || t == 9 || t == 11){
		printf("thang cos 30 ngay");
	}else if( t == 2){
		printf("thang co 28 ngay (nam nhuan thi 29 ngay)");
	}else{
		printf("thang khong hop le");
	}
	return 0;
}
