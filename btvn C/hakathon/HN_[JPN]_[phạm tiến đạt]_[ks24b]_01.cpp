// de 1
#include<stdio.h>
int main(){
	
	int choice,size,soHoanHao;
	int arr[100];
	int phanTuMoi;
	int viTriXoa;
	int min;
	
	do{
		printf("\n\tMENU\n");
		printf("1.nhap phan tu va gia tri\n");
		printf("2.in ra cac gia tri trong mang\n");
		printf("3.so luong so hoan hao\n");
		printf("4.gia tri nho thu 2 trong mang\n");
		printf("5.them phan tu vao vi tri dau tien cua mang\n");
		printf("6.xoa phan tu tai vi tri : \n");
		printf("7.sap xep mang theo thu tu giam dan\n");
		printf("8.tim kiem phan tu trong mang\n");
		printf("9.sap xep va hien thi (so le dung truoc, so chan dung sau)\n");
		printf("10.dao nguoc thu tu cac phan tu va in ra toan bo mang\n");
		printf("11.thoat\n");
		
		
		
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("kich thuoc mang : ");
				scanf("%d",&size);
				
				for(int i=0;i<size;i++){
					printf("arr[%d]: ",i);
					scanf("%d",&arr[i]);
				}
			break;	
			case 2:
				for(int i=0;i<size;i++){
					printf("arr[%d] = %d\n",i,arr[i]);
				}
			break;
			case 3:
			    for (int i=0;i<size;i++) {
			        int sum=0; 
			        for (int j=1;j<=arr[i]/2;j++) { //check xem co phai so hoan hao khong
			            if (arr[i]%j == 0) {
			                sum += j; 
			            }
			        }
			        if (sum==arr[i]&&arr[i]>1) {
			            soHoanHao++; 
			        }
			    }
			    printf("so luong so hoan hao la : %d",soHoanHao);
			break;
//			case 4:
//				if(size<2){
//					printf("khong co gia tri nho thu 2 trong mang\n");
//				}
//				
//				for(int i=0;i<size;i++){
//					
//				}
//			    
//			break;
			case 5:
				printf("nhap gia tri muon them : ");
				scanf("%d",&phanTuMoi);
				
				for (int i=size;i>0;i--) {
        			arr[i]=arr[i-1];
   				}
				
				arr[0]=phanTuMoi;
				size++;
				
			break;
			case 6:
				printf("vi tri muon xoa : ");
				scanf("%d",viTriXoa);
				for(int i=viTriXoa;i<size-1;i++){
					arr[i]=arr[i+1];
				}
				--size;
				
			break;
			case 7:
				for(int i=0;i<size;i++){
					min=i;
					for(int j=i-1;j<size;j++){
						if(arr[min]>arr[j]){
							min = j;
						}
					}
					int temp=arr[i];
					arr[i]=arr[min];
					arr[min]=temp;
				}
			break;
			case 10:
				for (int i=0;i<size/2;i++) {
			        int temp = arr[i];
			        arr[i]=arr[size-1-i];
			        arr[size-1-i] = temp;
				}
				for(int i=0;i<size;i++){
					
					printf("\narr[%d] = %d - ",i,arr[i]);//chua co chan le
				}

			break;
			case 11: 
				printf("Thoat khoi chuong trinh\n");
			break;
			default:
				printf("Vui long lua chon lai\n");
		}
	}while(choice!=11);
	

	return 0;
}




















