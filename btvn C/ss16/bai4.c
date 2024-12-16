#include<stdio.h>

int array(int *arr){
	for(int i=0;i<10;i++){
		printf("gia tri a[%d] : %d\n",i,*(arr+i));
	}
}


int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	array(arr);
	
	return 0;
}
