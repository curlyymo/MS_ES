#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct student
{
    char name[100];
    int id;
    int age;
    float grade;
} s;
void edit(s*student_p,s);


int main()
{
    s student_1;
    edit(&student_1);
    printf("Name: %s\n", student_1.name);
    printf("Age: %d\n", student_1.age);
    printf("ID: %d\n", student_1.id);
    printf("Grade: %.2f\n", student_1.grade);



void edit (s*student_p)
{


     strcpy(student_p2->name, "curlymo and mo");
    (*student_p2).age=20;
    student_p2->id=1222;
    student_p2->grade=100;


}
