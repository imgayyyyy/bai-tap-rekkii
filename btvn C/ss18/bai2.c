#include<stdio.h>




struct student{
	char name[50];
	int age;
	char phone[12];
};
	
	
	
int main(){
	struct student;
	
	printf("nhap ten : ");
	fgets(student.name,sizeof(student.name),stdin);
	printf("nhap tuoi : ");
	scanf("%d",&student.age);
	fflush(stdin);
	printf("nhap sdt : ");
	fgets(student.phone,sizeof(student.phone),stdin);
	
	printf("\nho va ten : %s",student.name);
	printf("\ntuoi : %d",student.age);
	printf("\nsdt : %s",student.phone);
	
	
}
	

	
	
	
	
	
	
	
	
	
	
	
