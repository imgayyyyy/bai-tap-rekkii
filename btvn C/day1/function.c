#include "function.h"
#include<stdio.h>
#include<string.h>
 void addStudent(struct Student* student) {
//    for(int i=0; i<*n;i++){
//		student[i].studentId=student[i].studentId++;
 getchar();
    printf("ID : ");
    fgets(student->studentId, sizeof(student->studentId), stdin);
    student->studentId[strcspn(student->studentId, "\n")] = '\0';
	    //ten
	   
	    printf("NAME STUDENT: ");
	    fgets(student->name, sizeof(student->name), stdin);
	    student->name[strcspn(student->name, "\n")] = '\0';
	    //tuoi
	    printf("DATE : (dd mm yyyy): ");
	    scanf("%d %d %d", &student->dateOfBirth.day, &student->dateOfBirth.month, &student->dateOfBirth.year);
	    //gioi tinh
	    printf("GENDER ( 1.MAN, 2.WOMEN): ");
	    scanf("%d", (int*)&student->gender);
	    // email
	    getchar(); 
	    printf("EMAIL : ");
	    fgets(student->email, sizeof(student->email), stdin);
	    student->email[strcspn(student->email, "\n")] = '\0';
	    // so dien thoai
	    printf("PHONE : ");
	    fgets(student->phone, sizeof(student->phone), stdin);
	    student->phone[strcspn(student->phone, "\n")] = '\0';
	    // thanh cong
	    printf("nhap thong tin thanh cong\n");
	    
//	}
}



void displayStudent(const struct Student* student) {
    printf("\nID : %s\n", student->studentId);
    printf("NAME : %s\n", student->name);
    printf("DATE : %02d/%02d/%04d\n", 
         student->dateOfBirth.day, student->dateOfBirth.month, student->dateOfBirth.year);
    printf("GENDER : %d\n", student->gender);
    printf("EMAIL : %s\n", student->email);
    printf("PHONE : %s\n", student->phone);
}
void Studentlish(const struct Student student[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNUMBERS STUDENT %d:\n", i + 1);
        displayStudent(&student[i]);
    }
}
   

void saveStudentsToFile(struct Student student[], int n) {
    FILE *ptr = fopen("student.bin", "wb"); 
    if (ptr == NULL) {
        printf("Loi: Khong mo duoc tep ");
        return;
    }
    fwrite(student,50,6,ptr);
    printf("du lieu da duoc luu");
    fclose(ptr);
}



void printfStudent(const struct Student student[], int n) {//const la bien hang chi de doc
    printf("\n%-70s\n", "================================= DANH SACH SINH VIEN ================================");
    printf("| %-10s | %-20s |  %-10s | %-6s | %-30s | %-15s |\n", 
           "ID", "NAME", "DATE", "GENDER", "EMAIL", "PHONE");
    printf("---------------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("| %-10s | %-20s | %02d/%02d/%4d | %-6s | %-30s | %-15s |\n",
               student[i].studentId,
               student[i].name,
               student[i].dateOfBirth.day,
               student[i].dateOfBirth.month,
               student[i].dateOfBirth.year,
               student[i].gender ? "MAN" : "WOMEN",
               student[i].email,
               student[i].phone);
    }

    printf("%-70s\n", "=======================================================================================");
}



void editStudent(struct Student student[], int n){
    char studentId[10];
    int adidas = 0;

    printf("nhap id can sua : ");
    scanf("%s", studentId);
    for (int i = 0; i < n; i++) {
        if (strcmp(student[i].studentId, studentId) == 0) {
            adidas = 1;

            printf("\nCURRENT STUDENT INFORMATION:\n");
            printf("ID: %s\n", student[i].studentId);
            printf("NAME: %s\n", student[i].name);
            printf("DATE : %02d/%02d/%04d\n", 
                   student[i].dateOfBirth.day, 
                   student[i].dateOfBirth.month, 
                   student[i].dateOfBirth.year);
            printf("GENDER: %s\n", student[i].gender ? "MAN" : "WOMEN");
            printf("EMAIL: %s\n", student[i].email);
            printf("PHONE: %s\n", student[i].phone);
        // thong tin moi
            printf("\nsua thong tin sinh vien :\n");
            getchar(); 
            printf("ten hien tai : %s: ", student[i].name);
            fgets(student[i].name, sizeof(student[i].name), stdin);
            student[i].name[strcspn(student[i].name, "\n")] = '\0';
            printf("ngay thang nam sinh (dd-mm-yyyy) hien tai : %02d/%02d/%04d): ",
                   student[i].dateOfBirth.day,
                   student[i].dateOfBirth.month,
                   student[i].dateOfBirth.year);
            scanf("%d %d %d", 
                  &student[i].dateOfBirth.day, 
                  &student[i].dateOfBirth.month, 
                  &student[i].dateOfBirth.year);

            printf("GENDER (1 = MAN, 2 = WOMEN PRESENT : %s): ", student[i].gender ? "MAN" : "WOMAN");
            scanf("%d", &student[i].gender);

            getchar(); 

            printf("EMAIL-hien tai: %s: ", student[i].email);// hien tai
            fgets(student[i].email, sizeof(student[i].email), stdin);
            student[i].email[strcspn(student[i].email, "\n")] = '\0';

            printf("PHONE-hien tai: %s: ", student[i].phone);
            fgets(student[i].phone, sizeof(student[i].phone), stdin);
            student[i].phone[strcspn(student[i].phone, "\n")] = '\0';

            printf("\ncap nhat thong tin thanh cong\n");// cap nhat thong tin thanh cong
            break;
        }
    }
}






void deleteStudent(struct Student student[], int *n) {
    char studentId[10];
    printf("id sinh vien can xoa: ");
    scanf("%s", studentId);
    
    int findIndex = -1;
    for (int i = 0; i < *n; i++) {
        if (strcmp(student[i].studentId, studentId) == 0) {
            findIndex = i;
            break;
        }
    }
     
    if (findIndex == -1) {
        printf("khong tim thay id : %s\n", studentId);
    } else {
    	
        for (int i = findIndex; i < *n - 1; i++) {
            student[i] = student[i + 1];
        }

        (*n)--; 
        printf("xoa : %s thanh cong\n", studentId);
    }
}









