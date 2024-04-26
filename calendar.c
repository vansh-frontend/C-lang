#include <stdio.h>

#define true 1
#define false 0

int days_in_month[] = {0, 31, 28, 31, 30, 31, 31, 30, 31, 30, 31};
char *months[] =
    {
        " ",
        "\n\n\njanuary",
        "\n\n\nfebruary",
        "\n\n\nmarch",
        "\n\n\napril",
        "\n\n\nmay",
        "\n\n\njune",
        "\n\n\njuly",
        "\n\n\naugust",
        "\n\n\nseptember",
        "\n\n\nnovember",
        "\n\n\ndecember",
};
int inputyear(void)
{
  int year;
  printf("please enter a year (example: 2002): ");
  scanf("%d", &year);
  return year;
}
int determineleapyear(int year)
{
  if (year % 4 == false && year % 100 != false || year % 400 == false)
  {
    days_in_month[2] = 29;
    return true;
  }
  else
  {
    days_in_month[2] = 28;
    return false;
  }
}
int determinedaycode(int year)
{
  int daycode;
  int d1, d2, d3;

  d1 = (year - 1.) / 4.0;
  d2 = (year - 1.) / 100.;
  d3 = (year - 1.) / 400.;
  daycode = (year + d1 - d2 + d3) % 7;
  return daycode;
}
void calendar(int year, int daycode)
{

  int month, day;
  for (month = 1; month <= 12; month++)
  {
    printf("%s", months[month]);
    printf("\n\nsun mon tue wed thu fri sat\n");
    for (day = 1; day <= 1 + daycode * 5; day++)
    {
      printf(" ");
    }
    for (day = 1; day <= days_in_month[month]; day++)
    {
      printf("%2d", day);
      if ((day + daycode) % 7 > 0)
        printf("  ");
      else
        printf("\n");
    }
    daycode = (daycode + days_in_month[month]) % 7;
  }
}
int main(void)
{
  int year, daycode, leapyear;
  year = inputyear();
  daycode = determinedaycode(year);
  determineleapyear(year);
  calendar(year, daycode);
  printf("\n");
}
