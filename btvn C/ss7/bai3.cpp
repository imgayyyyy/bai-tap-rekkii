#include<stdio.h>
int main(){
	
	int a[5];
	int soChan = 0;
	scanf("%d %d %d %d %d",&a[0], &a[1], &a[2], &a[3], &a[4]);
	for(int i=0;i<5;i++){
		if(a[i]%2==0){
			printf(" %d",a[i]);
			soChan = 1;
			
		}
		
		
	}
	if(soChan==0){
		printf("mang khong co so chan");
	}
	
	
	
	
	
	
	
	return 0;
}




//chua xong

