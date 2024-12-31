#include "datatype.h"
//nguyen mau ham
void addStudent(struct Student* student);

void printfStudent(const struct Student student[], int n);

void saveStudentsToFile(struct Student student[], int n);

void editStudent(struct Student student[], int n);

void deleteStudent(struct Student student[],  int *n);

void mainMenu();
void studentMenu(struct Student student[],int n);
void exitOrBack();
