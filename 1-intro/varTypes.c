#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
  int age;
  float money;
  bool isEmployed;
  char nameLetter;

  printf("How old are you? ");
  scanf("%d", &age);

  printf("How much have in your pocket now? ");
  scanf("%f", &money);

  printf("Are you looking for a job? (0 or 1): ");
  scanf("%d", &isEmployed);

  printf("What's the first letter in your name? ");
  scanf(" %c", &nameLetter);

  printf("So.. you are %d years old, have $%.2f in cash right now, your name begins with '%c', and your job status is: %d", age, money, nameLetter, isEmployed);
}
