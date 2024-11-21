#include<stdio.h>
#include<math.h>
int main(){
	float r, chu_vi , dien_tich;
	float pi = 3.14;
	scanf("%f", &r);
	chu_vi = 2 * pi * r;
	dien_tich = pi * pow(r , 2);
	printf("%.2f", chu_vi);
	printf("\n%.2f", dien_tich);
	return 0;
}
