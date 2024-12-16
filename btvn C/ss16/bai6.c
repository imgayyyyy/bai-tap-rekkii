#include<Stdio.h>
int timKiem(int *arr,int value){
	int found =0;
	for(int i=0;i<5;i++){
		if(*(arr+i)==value){
			printf("vi tri : %d", i);
			found =1;
		}
	}
	if(!found){
		printf("khong tim thay gia tri");
	}
}

int main(){
	int arr[5]={1,2,3,4,5};
	int value;
	printf("nhap gia tri ");
	scanf("%d",&value);
	timKiem(arr,value);
	return 0;
}
