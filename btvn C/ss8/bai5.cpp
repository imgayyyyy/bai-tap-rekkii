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
		for(int j=0;j<y;j++){
			if(i==0||i==x-1||j==0||j==y-1){
				tong+=a[i][j];
			}
		}
	}
	printf("%d",tong);
	
	
	
	
	
	
	return 0;
}
