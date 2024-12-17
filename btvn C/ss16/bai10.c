#include<stdio.h>

void delete(int *arr,int *length,int viTri){
	

    for (int i = viTri; i < *length - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*length)--;
   
   

}

int main(){
	int arr[5]={1,2,3,4,5};
	int length = 5;
	int viTri;
	
	printf("nhap vi tri xoa");
	scanf("%d",&viTri);
	
	
	delete( arr,&length,viTri);
	
	//printf("%d",length);
	
	for(int i=0;i<length;i++){
		printf("%d ",*(arr + i));
	}
	
	return 0;
}
