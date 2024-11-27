#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	scanf("%lf %lf %lf",&a, &b,&c);
	int denta;
	denta = pow(b, 2) - (4*a*c);
	if(denta < 0){
		printf("phuong trinh vo nghiem");
	}else if(denta == 0){
		printf("phuong trinh co nghiem kep : ");
		printf("%.2f",((-b)/(2*a)));
	}else if(denta > 0){
		printf("phuong trinh co 2 nghiem phan biet");
		printf("\nx1 = %.2f",((-b-sqrt(denta))/(2*a)));
		printf("\nx2 = %.2f",((-b+sqrt(denta))/(2*a)));
	}
	return 0;
}




