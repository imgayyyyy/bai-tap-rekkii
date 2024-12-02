#include<stdio.h>
int main(){
	int a[2][2]={
	{1,2},
	{3,4}
	};
	printf("nhap so");
	int x,y=0;
	scanf("%d",&x);
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(x==a[i][j]){
				y=1;
			}
			
		}
	}
	if(y==1){
		printf("phan tu co trong mang");
	}
	if(y!=1){
		printf("phan tu khong co trong mang");
	}



	return 0;
}
