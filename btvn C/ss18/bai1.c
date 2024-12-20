#include<Stdio.h>

//void xoaxuongdong(char x[]){
//	size_t len = strlen(x);
//	if(x[len-1]=='\n'){
//		x[len-1]=='\0';
//	}
//}

//em chua xoa duoc cai xoa xuong dong mà fgets sinh ra a, thay xem xet giup em voi a  <3 


int main(){
	struct student{
		char name[50];
		int age;
		char phone[12];
	};
	
	struct student user01;
	
	printf("nhap ten : ");
	fgets(user01.name,sizeof(user01.name),stdin);
//	xoaxuongdong(user01.name);
	printf("nhap tuoi : ");
	scanf("%d",&user01.age);
	fflush(stdin);
	printf("nhap sdt : ");
	fgets(user01.phone,sizeof(user01.phone),stdin);
//	xoaxuongdong(user01.phone);
	
	printf("\nho va ten : %s",user01.name);
	printf("\ntuoi : %d",user01.age);
	printf("\nsdt : %s",user01.phone);
	
}
