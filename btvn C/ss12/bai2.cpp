#include<Stdio.h>



int array(int arr[],int size){

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		printf(" %d ",arr[i]);
	}
}

int main(){
	int size;
	scanf("%d",&size);
	int arr[size];
	array(arr,size);
	
}
