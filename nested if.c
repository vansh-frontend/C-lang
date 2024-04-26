#include <stdio.h>
int main()
{
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if (a > b)
  {
    if (a > c)
    {
      printf("a is greater\n");
    }
    else
    {
      printf("c is greater\n");
    }
  }
  else
  {
    if (b > c)
    {
      printf("b is greater\n");
    }
    else
    {
      printf("c is greater\n");
    }
  }
}
