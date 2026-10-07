#include <stdio.h>

int main()
{
     int a;
     int b;
     int sum;
     int difference;
     int product;
     float quotient;
       printf("enter the first number : ");
       scanf("%d", a);
       printf("enter second number : ");
       scanf("%d", b);
       sum = a + b;
       difference = a - b;
       product = a * b;
       quotient = (float)a / (float)b;
       printf("the sum of %d and %d is %d\n", a, b
       printf("the difference of %d and %d is %d\n", a, b, difference);
       printf("the product of %d and %d is %d\n", a, b, product);
       printf("the quotient of %d and %d is %f\n", a, b, quotient

    return 0;
}