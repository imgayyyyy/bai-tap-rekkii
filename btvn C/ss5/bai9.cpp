#include<stdio.h>
int main(){ 

	while(1){ 
		int luaChon, a,b,c;
		printf("\n	CACULATOR		");
		printf("\n1.nhap  3so");
		printf("\n2.tong 3 so");
		printf("\n3.trung binh 3 so");
		printf("\n4.nho nhat");
		printf("\n5.lon nhat");
		printf("\n6. thoat");
		printf("\n lua chon cua ban");
		scanf("%d",&luaChon);
		
		if(luaChon == 1){
			scanf("%d %d %d", &a, &b,&c);
			printf("%d %d %d",a,b,c);
		}else if(luaChon == 2){
			scanf("%d %d %d", &a, &b,&c);
			printf("tong:%d",a+b+c);
		}else if(luaChon == 3){
			scanf("%d %d %d", &a, &b, &c);
			printf("tich:%d",a*b*c);
		}else if(luaChon == 4){
			scanf("%d %d %d", &a, &b ,&c);
			int max,min,mid;
			if(a<b && a<c){
				a = min;
			}else if(b<a && b<c){
				b=min;
			}else if(c<a && c<b){
				c=min;
			}
			printf("so nho nhat %d", min);
		}else if(luaChon == 5){
			int max,min,mid;
			if(a>b && a>c){
				a = max;
			}else if(b>a && b>c){
				b=max;
			}else if(c>a && c>b){
				c=max;
			}
			
			printf("so lon nhat %d", max);
		}else if(luaChon == 6){
			break;
		}
		
		
		
		
		
		
	}
	return 0;
}
