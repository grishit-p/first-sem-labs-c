#include <stdio.h>

int main()
{
      float celsius;
      int farhenheit;

        printf("enter the temperature in celsius:");
        scanf("%f", &celsius);
        printf("the temperature in celsius is %f\n", celsius);
        farhenheit = (celsius * 9 / 5) + 32;
        printf("the temperature in farhenheit is %d\n", farhenheit);

      return 0;
}