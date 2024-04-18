// c code for sum of two num's enter by users

#include <stdio.h>
int main()
{
  // printf is used to print  our output

  int a, b, sum;

  printf("enter a num 1: "); // num 1
  scanf("%d", &a);           // scanf will read the num1

  printf("enter a num 2: "); // num 2
  scanf("%d", &b);           // scanf will read the num2

  sum = a + b;
  printf("\nsum of num 1 + num2 : %d", sum); // sum of num1 + num2

  return 0;
}