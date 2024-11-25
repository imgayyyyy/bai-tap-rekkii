#include<stdio.h>
int main(){
//	int luaChon, a,b;
//	printf("	CACULATOR		");
//	printf("\n1.tong 2 so");
//	printf("\n2.hieu 2 so");
//	printf("\n3.tich 2 so");
//	printf("\n4.thuong 2 so");
//	printf("\n5. thoat");
//	printf("\n lua chon cua ban");
//	scanf("%d",&luaChon);
	
	while(1){ //lap vo han, dung khi co break
		
		
		int luaChon, a,b;
		printf("\n	CACULATOR		");
		printf("\n1.tong 2 so");
		printf("\n2.hieu 2 so");
		printf("\n3.tich 2 so");
		printf("\n4.thuong 2 so");
		printf("\n5. thoat");
		printf("\n lua chon cua ban");
		scanf("%d",&luaChon);
		//scanf("%d %d", &a, &b);
		
		
		if(luaChon == 1){
			scanf("%d %d", &a, &b);
			printf("tong:%d",a+b);
		}else if(luaChon == 2){
			scanf("%d %d", &a, &b);
			printf("hieu:%d",a-b);
		}else if(luaChon == 3){
			scanf("%d %d", &a, &b);
			printf("tich:%d",a*b);
		}else if(luaChon == 4){
			float x,y;
			scanf("%f %f",&x, &y);
			printf("thuong: %.2f",x/y);
		}else if(luaChon == 5){
			break;
		}
		
		
		//scanf("%d", &luaChon);
	}
	
	return 0;
}
