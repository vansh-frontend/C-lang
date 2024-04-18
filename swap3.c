// swap two numbers without third varible with use of XOR 
#include <stdio.h>
int main()
{
  int a, b;

  printf(" value of a before swap: ");
  scanf("%d", &a);
  printf(" values of before swap b: ");
  scanf("%d", &b);

  a = a ^ b;
  b = a ^ b;
  a = b ^ a;

  printf("\n");

  printf(" value of a after swap:%d \n", a);
  printf(" values of after swap b: %d ", b);

  return 0;
}
