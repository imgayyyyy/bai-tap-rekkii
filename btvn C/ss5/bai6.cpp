#include<stdio.h>
int main(){
	
	
	int luaChon;
		int a,b;
		
		printf("	CACULATOR		");
		printf("\n1.tong 2 so");
		printf("\n2.hieu 2 so");
		printf("\n3.tich 2 so");
		printf("\n4.thuong 2 so");
		printf("\n5. thoat");
		printf("\n lua chon cua ban");
		scanf("%d",&luaChon);
	
	while(luaChon <= 5){
//		printf("	CACULATOR		");
//		printf("\n1.tong 2 so");
//		printf("\n2.hieu 2 so");
//		printf("\n3.tich 2 so");
//		printf("\n4.thuong 2 so");
//		printf("\n5. thoat");
//		printf("\n lua chon cua ban");
//		
//		int luaChon;
//		int a,b;
//		scanf("%d",&luaChon);
	
		do{
			if(luaChon == 1){
				printf("\ntong 2 so : ");
				scanf("%d %d",&a, &b);
				printf("\ntong = %d", a+b);
			}else if(luaChon == 2){
				printf("\nhieu 2 so : ");
				scanf("%d %d",&a, &b);
				printf("\nhieu = %d", a-b);
			}else if(luaChon == 3){
				printf("\ntich 2 so :");
				scanf("%d %d", &a, &b);
				printf("\ntich = %d", a*b);
			}else if(luaChon == 4){
				float a,b;
				printf("\nthuong 2 so :");
				scanf("%f %f", &a, &b);
				printf("\n%.2f", a/b);
			}else if(luaChon == 5){
				break;
			}else{
				printf("\nchon lai");
			}
		}
		scanf("%d",&luaChon);
	}
	
	
	
	
	
	
	
//	do{
//		if(luaChon == 1){
//			printf("\ntong 2 so : ");
//			scanf("%d %d",&a, &b);
//			printf("\ntong = %d", a+b);
//		}else if(luaChon == 2){
//			printf("\nhieu 2 so : ");
//			scanf("%d %d",&a, &b);
//			printf("\nhieu = %d", a-b);
//		}else if(luaChon == 3){
//			printf("\ntich 2 so :");
//			scanf("%d %d", &a, &b);
//			printf("\ntich = %d", a*b);
//		}else if(luaChon == 4){
//			float a,b;
//			printf("\nthuong 2 so :");
//			scanf("%f %f", &a, &b);
//			printf("\n%.2f", a/b);
//		}else if(luaChon == 5){
//			break;
//		}else{
//			printf("\nchon lai");
//		}
//	}
	
	
	

	
	return 0;
}
