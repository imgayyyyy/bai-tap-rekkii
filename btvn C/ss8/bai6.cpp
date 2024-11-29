#include<stdio.h>
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	int a[x][y];
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int tong=0;
	for(int i=0;i<x;i++){
		printf(" %d",a[i][i]);
		tong+=a[i][i];
	}
	
	printf("\n%d",tong);
	
	
	
	return 0;
}
