#include <stdio.h>
int main()
{
  int arr[10];
  int i;
  printf("\n\n read and print element of an array: \n");
  printf("                   ");
  printf("input 10 element in array : \n");
  for (i = 0; i < 10; i++)
  {
    printf("element %d ", i);
    scanf("%d", &arr[i]);
  }
  printf("\n element in array are: ");
  for (i = 0; i < 10; i++)
  {
    printf("%d\n", arr[i]);
  }
  printf("\n");
}
