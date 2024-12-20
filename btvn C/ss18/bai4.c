#include<stdio.h>

struct Student{
	int id;
	char name[50];
	int age;
	char phone[12];
};

int main(){
	struct Student student[50];
	
	for(int i=1;i<6;i++){
		student[i].id=i+1;
		printf("sinh vien thu %d",i);
		printf("\nnhap ten sinh vien : ");
		fgets(student[i].name,sizeof(student[i].name),stdin);
		//student[i].name[strcspn(student[i].name, "\n")] = '\0';
		printf("\nnhap tuoi sinh vien : ");
		scanf("%d",&student[i].age);
		fflush(stdin);
		printf("\nnhap sdt sinh vien : ");
		fgets(student[i].phone,sizeof(student[i].phone),stdin);
	//	student[i].phone[strcspn(student[i].phone, "\n")] = '\0';
		//tim hieu xoa xuong dong nhung chua thanh cong
		
	}
	
	
	printf("thong tin cac sinh vien : ");
	
	for(int i=1;i<6;i++){
		printf("\nID : %d",student[i].id);
		printf("\nten : %s",student[i].name);
		printf("\ntuoi : %d",student[i].age);
		printf("\nsdt : %s",student[i].phone);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
