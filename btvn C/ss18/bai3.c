#include<stdio.h>

struct student{
	char name[50];
	int age;
	char phone[50];
};

int main(){
	struct student user01;
	struct student user02;
	struct student user03;
	struct student user04;
	struct student user05;
	
	//nhap thong tin cho user01
		printf("\nsinh vien 1\n");
		printf("nhap ten : ");
		fgets(user01.name,sizeof(user01.name),stdin);
		
		printf("nhap tuoi : ");
		scanf("%d",&user01.age);
		fflush(stdin);
		printf("nhap sdt : ");
		fgets(user01.phone,sizeof(user01.phone),stdin);
	
		
	//nhap thong tin cho user02
		printf("\nsinh vien 2\n");
		printf("nhap ten : ");
		fgets(user02.name,sizeof(user02.name),stdin);
		
		printf("nhap tuoi : ");
		scanf("%d",&user02.age);
		fflush(stdin);
		printf("nhap sdt : ");
		fgets(user02.phone,sizeof(user02.phone),stdin);
		
	
	//nhap thong tin cho user03
		printf("\nsinh vien 3\n");
		printf("nhap ten : ");
		fgets(user03.name,sizeof(user03.name),stdin);
		
		printf("nhap tuoi : ");
		scanf("%d",&user03.age);
		fflush(stdin);
		printf("nhap sdt : ");
		fgets(user03.phone,sizeof(user03.phone),stdin);
		
		
	//nhap thong tin cho user04
		printf("\nsinh vien 4\n");
		printf("nhap ten : ");
		fgets(user04.name,sizeof(user04.name),stdin);
		
		printf("nhap tuoi : ");
		scanf("%d",&user04.age);
		fflush(stdin);
		printf("nhap sdt : ");
		fgets(user04.phone,sizeof(user04.phone),stdin);
		
	
	//nhap thong tin cho user05
		printf("\nsinh vien 5\n");
		printf("nhap ten : ");
		fgets(user05.name,sizeof(user05.name),stdin);
		
		printf("nhap tuoi : ");
		scanf("%d",&user05.age);
		fflush(stdin);
		printf("nhap sdt : ");
		fgets(user05.phone,sizeof(user05.phone),stdin);
		
	
	
	
		printf("\nsinh vien 1");
		printf("\nten : %s",user01.name);
		printf("\ntuoi : %d",user01.age);
		printf("\nsdt : %s",user01.phone);
		
		printf("\nsinh vien 2");
		printf("\nten : %s",user02.name);
		printf("\ntuoi : %d",user02.age);
		printf("\nsdt : %s",user02.phone);
		
		printf("\nsinh vien 3");
		printf("\nten : %s",user03.name);
		printf("\ntuoi : %d",user03.age);
		printf("\nsdt : %s",user03.phone);
		
		printf("\nsinh vien 4");
		printf("\nten : %s",user04.name);
		printf("\ntuoi : %d",user04.age);
		printf("\nsdt : %s",user04.phone);
		
		printf("\nsinh vien 5");
		printf("\nten : %s",user05.name);
		printf("\ntuoi : %d",user05.age);
		printf("\nsdt : %s",user05.phone);
		
	
	
	
	
	
	
}






