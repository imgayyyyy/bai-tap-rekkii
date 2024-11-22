#include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf("%d", &a);
	if (a % 3 == 0 && a % 5 == 0){
		printf("so chia het cho 3 va 5");
	}else if(a % 3 == 0 && a % 5 !=0){
		printf("so chia het cho 3");
	}else if(a % 3 != 0 && a % 5 == 0){
		printf("so chia het cho 5");
	}else{
		printf("khong chia het cho 3 va 5");
	}
	return 0;
}
