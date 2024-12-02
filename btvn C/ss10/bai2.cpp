#include<stdio.h>

int sapXep(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j] > a[j + 1]){
				int x= a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;
			}
		}
	}
}




int main(){
	int a[]={4,6,2,7,3,9};
	int n=sizeof(a)/sizeof(a[0]);
	
	
	printf("mang ban dau : ");
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
	printf("\n");
	
	
	
	sapXep(a,n);
	
	
	printf("mang sau sap xep");
	for(int i=0;i<n;i++){
		printf(" %d", a[i]);
	}
	printf("\n");
	
	
	
	
	
	return 0;
}
