#include <stdio.h>
#include "function.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int choice;
int n=0;
struct Student student[50];
do{
	printf("-----STUDENT MANAGEMENT-------\n");
	printf("1.them sinh vien\n");
	printf("2.hien thi danh sach sinh vien\n");
	printf("3.sua thong tin sinh vien\n");
	printf("4.xoa sinh vien\n");
	printf("5.tim kiem sinh vien\n");
	printf("6.sap xep theo ten\n");
	printf("7.kiem tra du lieu sinh vien\n");
	printf("8.luu du lieu\n");
	printf("(b):back	(9):exit\n");
	printf("nhap lua chon cua ban : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			if (n<20){
                    addStudent(&student[n]); 
                    n++;
                } else {
                    printf("danh sach da day\n");
                }
            break;
        case 2:
        	if(n==0){
                    printf("khong co sinh vien trong danh sach\n");
                } else {
                    printfStudent(student, n); 
                }
            break;
        	
        case 3 : 
                editStudent(student,n);
            break;
		case 4:
				deleteStudent(student,&n);
			break;
		case 8:
			if(n==0){
				printf("khong co sinh vien trong danh sach");
			}else{
//				saveStudentsToFile(student , n);
			}
			break;
		case 9:{
			printf("thoat khoi chuong trinh");
			break;
			}
		default:{
			printf("nhap lai : \n");
			break;
			}
	}
	
}while(choice !=9);

	
	
	
	return 0;
}
