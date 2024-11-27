#include<stdio.h>
int main(){
	int tienGui,laiSuat,thang;
	scanf("%d %d %d",&tienGui,&laiSuat,&thang);
	float tienLai,tongNhan;
	tienLai = (tienGui * ((float)laiSuat / 100)) * thang;
	tongNhan = tienLai + tienGui;
	printf("tien lai : %.2f",tienLai);
	printf("\ntong nhan: %.2f",tongNhan);
	return 0;
}
