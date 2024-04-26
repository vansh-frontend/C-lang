#include <stdio.h>
int main()
{
  int i, j, n;
  printf("enter a number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n - i + 1; j++)
    {
      printf("%c", n - i + j + 65);
    }
    printf("\n");
  }
}
