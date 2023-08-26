#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    char name[100];
    int age;
    int degree;
    int section;
}s;
int main()
{
     s students[5] = {
        {"Mohamed", 22, 100, 1},
        {"Ahmed", 21, 97, 2},
        {"Janet", 25, 88, 3},
        {"Alaa", 18, 77, 4},
        {"Alaa", 18, 77, 4},

    };

    for (int i=0;i<5;i++)
    {
        printf("Student %d:\n",i+1);
        printf("Name : %s \n",students[i].name);
        printf("age : %d \n",students[i].age);
        printf("degree : %d \n",students[i].degree);
        printf("section : %d \n",students[i].section);
        printf("\n");
    }

    return 0;
}
