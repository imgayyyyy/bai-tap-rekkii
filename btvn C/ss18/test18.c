#include<stdio.h>
#include<string.h>
int main(){
	struct Student{
		int id;
		char fullName[100];
		int age;
		char gender[50];
		char phone[20]
	};
	
	struct Student user01={
		1,
		"pham tien dat",
		34,
		"male",
		"0358177281",
	};
	
	
	struct Student user02;
	
	
//	printf("%d %s %d %s %s", user01.id , user01.fullName,user01.age,user01.gender,user01.phone);
//	
//	user01.age=18;
//	printf("\nsau khi phau thuat nhu %d tuoi",user01.age);
//	
//	gan gia tri cho chuoi
//	
//	strcpy(user01.phone,"0123456");
//	
//	printf("\n%s",user01.phone);
	
	
	
	//nhap thong tin cho user 02
	printf("nhap id sv");
	scanf("%d",&user02.id);
	fflush(stdin);
	printf("nhap ho va ten");
	fgets(user02.fullName,sizeof(user02.fullName),stdin);
	printf("nhap sdt sv");
	fgets(user02.phone,sizeof(user02.phone),stdin);
	//strcpn(void * str,void * search);
	printf("%d \n%s \n%s",user02.id,user02.fullName,user02.phone);
	
	
	
	
	
	
	struct address{
		char city[100];
		char street[100];
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;	
}





