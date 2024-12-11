//#include<stdio.h>
//int array(int m, int n,int arr[][]){
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			printf("arr[%d][%d]: ",i,j);
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			printf("\n arr[%d][%d] = %d ",i,j,arr[i][j]);
//		}
//	}
//}
//
//
//
//
//int main(){
//	int m,n;
//	scanf("%d %d",&m,&n);
//	int arr[m][n];
//	array(m,n,arr);
//}



#include <stdio.h>

void taoMaTran(int soHang, int soCot, int maTran[][100]) {
    printf("Nhap gia tri cho ma tran (%dx%d):\n", soHang, soCot);
    for (int i = 0; i < soHang; ++i) {
        for (int j = 0; j < soCot; ++j) {
            printf("Nhap phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}

void inMaTran(int soHang, int soCot, int maTran[][100]) {
    printf("Ma tran (%dx%d) la:\n", soHang, soCot);
    for (int i = 0; i < soHang; ++i) {
        for (int j = 0; j < soCot; ++j) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int soHang, soCot;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &soHang);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &soCot);

    if (soHang <= 0 || soCot <= 0 || soHang > 100 || soCot > 100) {
        printf("Kich thuoc ma tran khong hop le! Vui long nhap so hang va so cot trong khoang 1 den 100.\n");
        return 1;
    }

    int maTran[100][100];
    taoMaTran(soHang, soCot, maTran);
    inMaTran(soHang, soCot, maTran);

    return 0;
}






