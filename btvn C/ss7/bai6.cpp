#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
		if(a[i]%2==0){
			a[i]+=3;
			printf("\n%d",a[i]);
		}else{
			a[i]+=2;
			printf("\n%d",a[i]);
		}
		
	}








	return 0;
}
