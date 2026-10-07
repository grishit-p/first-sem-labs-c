#include <stdio.h>

int main()
{
    char name[20];
    int age;
    printf("enter student name :");
    scanf("%s", name);
    printf("enter student age : ");
    scanf("%d", &age);
    printf("The student name is %s and the student age is %d", name, age);

    return 0;
}
