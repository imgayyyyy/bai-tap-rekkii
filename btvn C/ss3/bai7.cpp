#include<stdio.h>
int main(){
	int a, chu_so;
	int tong = 0;
	scanf("%d",&a);
	while (a > 0) {
        chu_so = a % 10;    
        tong += chu_so;
        a = a / 10;        
    }
    printf("%d",tong);
    return 0;
}
