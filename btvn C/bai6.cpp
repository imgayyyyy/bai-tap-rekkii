#include<stdio.h>
int main(){
	float c, m, t,d,tong;
	d = m - c;
	scanf("%f %f", &c, &m);
	if(d >= 0 && d < 50){
		t = 10.000;
	}else if(d >= 50 && d < 100){
		t = 15.000;
	}else if(d >= 100 && d <150){
		t = 20.000;
	}else if(d >=150 && d < 200){
		t = 25.000;
	}else if(d >= 200){
		t = 30.000;
	}
	tong = d * t;
	printf("%.2f", tong);
	return 0;
}	
