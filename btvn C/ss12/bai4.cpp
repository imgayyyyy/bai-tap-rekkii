#include<stdio.h>

int array(int arr[], int size){
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	printf("so lon nhat trong mang la : %d",max);
}


int main(){
	int size;
	scanf("%d",&size);
	int arr[size];
	array(arr,size);
}
