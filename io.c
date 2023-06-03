#include <stdio.h>

int main(int argc, char const *argv[])
{
  int age = 0;
  int res;

  printf("How old are you? ");
  res = scanf("%d", &age);
  if (res > 0)
  {
    /* code */
    printf("You are %d years old.\n", age);
  }else{
    printf("You didn't enter a number.\n");
  }

  return 0;
}
