#include <stdio.h>
#include <stdlib.h>
#define N 5
typedef struct student
{
    char name[20];
    int age;
    char section[10];
    int id;
} s;

void main()
{
    s students[5] =
    {
        {"Mohamed", 22, "A1", 1009},
        {"Ahmed", 21, "B1", 1008},
        {"Janet", 25, "c1", 1007},
        {"Moustafa", 18, "D1", 1005},
        {"Alaa", 18, "f1", 1006},

    };

    int size=sizeof(students)/sizeof(students[0]);


    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if (students[i].id>students[j].id)
            {
                s temp=students[i];
                students[i]=students[j];
                students[j]=temp;
            }
        }
    }
    for(int c=0; c<N; c++)
    {
         printf("Name: %s\n", students[c].name);
        printf("Age: %d\n", students[c].age);
        printf("Section: %s\n", students[c].section);
        printf("ID: %d\n\n", students[c].id);
    }
}
