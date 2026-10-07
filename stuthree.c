#include <stdio.h>

int main() 
{
    char name[50];
    float marks1, marks2, marks3;
    float total, average;
    printf("Enter student's name: ");
    scanf("%s", name);
    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);
    total = marks1 + marks2 + marks3;
    average = total / 3;
    printf("\nStudent's Name: %s", name);
    printf("\nTotal Marks: %.2f", total);
    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}