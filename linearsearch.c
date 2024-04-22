#include <stdio.h>

int main()
{
  int i, n, key;
  int a[100];

  printf("Enter the size of array: ");
  scanf("%d", &n);

  printf("Enter %d numbers->\n", n);
  for (i = 0; i < n; i++)
  {
    printf("Enter a number at %d index: ", i);
    scanf("%d", &a[i]);
  }

  printf("Enter a number to find in the array: ");
  scanf("%d", &key);

  for (i = 0; i < n; i++)
  {
    if (a[i] == key)
    {
      printf("Element %d found at index %d\n", a[i], i);
      return 0;
    }
  }

  printf("Number not found in the array.\n");

  return 0;
}
