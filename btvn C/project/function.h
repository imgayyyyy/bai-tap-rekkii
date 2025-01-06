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
void sapXepSv();
void fineSv();



void addTeacher(struct Teacher* teacher);

void printfTeacher(const struct Teacher teacher[], int n);

void saveTeacherToFile(struct Teacher teacher[], int n);

void editTeacher(struct Teacher teacher[], int n);

void deleteTeacher(struct Teacher teacher[],  int *n);


void teacherMenu(struct Teacher teacher[],int n);

void sapXepTeacher();
void fineTeacher();
