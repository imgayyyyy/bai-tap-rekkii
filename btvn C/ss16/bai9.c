#include<stdio.h>

void insert(int *arr,int *length,int newElement,int viTri){
	for (int i = *length; i > viTri; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[viTri] = newElement;
    (*length)++; 

}

int main(){
	int arr[5]={1,2,3,4,5};
	int length = 5;
	int newElement,viTri;
	printf("nhap gia tri can them");
	scanf("%d",&newElement);
	printf("nhap vi tri them");
	scanf("%d",&viTri);
	
	
	insert( arr,&length, newElement,viTri);
	
	//printf("%d",length);
	
	for(int i=0;i<length;i++){
		printf("%d ",*(arr + i));
	}
	
	return 0;
}
