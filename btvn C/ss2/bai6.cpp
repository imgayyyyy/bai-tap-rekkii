#include<stdio.h>
#include<math.h>
int main(){
	float pi = 3.14;
	int r;
	scanf("%d", &r);
	float chu_vi = 2*pi*r;
	float dien_tich = pi * pow(r, 2);
	printf("%.2f",chu_vi);
	printf("\n%.2f",dien_tich);
	return 0;
}
