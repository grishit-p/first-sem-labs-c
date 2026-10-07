#include <stdio.h>

int main()
{
      int a;
      int b;
      int area;
        printf("enter the length of rectangle:");
        scanf("%d", &a);
        printf("enter the breadth of rectangle:");
        scanf("%d", &b);
        area = a * b;
        printf("the area of rectangle is %d", area);
      return 0;
}
