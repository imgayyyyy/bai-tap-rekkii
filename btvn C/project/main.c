#include <stdio.h>
#include "function.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//	int n=0;
	struct Student student[50];
	int choose;
	
	do{
		mainMenu();
		scanf("%d",&choose);
		switch(choose){
			case 1:
				break;
			case 2:
				studentMenu(struct Student student[]);
				break;
			case 0:
				printf("thoat chuong trinh");
				break;
			default:
				printf("yeu cau khong hop le-nhap lai: \n");
				break;
		}	
	}while(choose!=0);
	
	
	
	return 0;
}
