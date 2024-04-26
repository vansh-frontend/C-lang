#include <stdio.h>
int main()
{
  int n, i, j, ocno = 0, dn;
  printf("\n\nconvert decimal to octal: \n");
  printf("---------------------------------\n");

  printf("enter a numeber to covert : ");
  scanf("%d", &n);
  dn = n;
  i = 1;
  for (j = n; j > 0; j /= 8)
  {
    ocno = ocno + (j % 8) * i;
    i = i * 10;
    n = n / 8;
  }
  printf("\nthe octal of %d is %d. \n\n", dn, ocno);
}
