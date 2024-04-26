#include <stdio.h>
struct wheel
{
  char name[20];
  int seat;
  int warrenty;
  char xyz[20];
};
int main()
{
  struct wheel w[4];
  int n, i;
  int x = 1;
  printf("enter a N number of entry:  ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("\nwheel %d: \n", i + 1);
    printf("enter a char name: ");
    scanf("%s", w[i].name);
    printf("enter how many seater your car : ");
    scanf("%d", &w[i].seat);
    printf("enter car warrenty: ");
    scanf("%d", &w[i].warrenty);
    printf("your car is petrol/diseal: ");
    scanf("%s", w[i].xyz);
    printf("\n");
  }
  for (i = 0; i < n; i++, x++)
  {
    printf("\nwheel %d  is :  \n", i + 1);
    printf("\t car %d name %s \n", x, w[i].name);
    printf("\t car %d is %d seater \n", x, w[i].seat);
    printf("\t car %d warrenty  is %d \n", x, w[i].warrenty);
    printf("\t your car %d is %s \n", x, w[i].xyz);
  }
}
