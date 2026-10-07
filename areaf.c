#include <stdio.h>

int main()
{
      float a;
      float b;
      float area;
        printf("enter the length of rectangle:");
        scanf("%f", &a);
        printf("enter the breadth of rectangle:");
        scanf("%f", &b);
        area = a * b;
        printf("the area of rectangle is %f", area);
      return 0;
} 