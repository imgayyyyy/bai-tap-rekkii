#include<stdio.h>

int updateArray(int *arr,int viTri,int newValue){
	if(viTri < 0|| viTri>=5){
		printf("vi tri nam ngoai pham vi cua mang");
	}
	arr[viTri]=newValue;
}

int inGiaTri(int *arr){
	for(int i=0;i<5;i++){
		printf("array[%d] : %d\n",i,*(arr+i));
	}
}

int main(){
	int arr[5]={1,2,3,4,5};
	int viTri,newValue;
	printf("nhap vi tri");
	scanf("%d",&viTri);
	printf("nhap gia tri moi");
	scanf("%d",&newValue);
	updateArray(arr,viTri,newValue);
	inGiaTri(arr);
	return 0;
}
