#include<stdio.h>
int main(){
	
	int a[5]={3,4,5,7,8};
	int x;
	scanf("%d",&x);
	int o=0;
	for(int i=0;i<5;i++){
		if(a[i]==x){
			printf("vi tri phan tu trong mang la %d",i);
			o=1;
			break;
		}
	}
	if(0==0){
		printf("phan tu khong co trong mang");
	}
	
	
	
	return 0;
}
