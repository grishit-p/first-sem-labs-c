#include <stdio.h>

int main()
{
      char name[20];
      int age;
      char gender;
      printf("enter your name:");
      scanf("%s", name);
      printf("Your name is %s", name);
      printf("enter your age:");
      scanf("%d", &age);
      printf("You are %d years old.", age);
      printf("enter your gender (M/F):");
      scanf(" %c", &gender);
      printf("You are %c.", gender);

      return 0;
}
