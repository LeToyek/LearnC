#include <stdio.h>

int main(int argc, char const *argv[])
{
  int age = 0;
  int res;

  res = scanf("%d", &age);

  if (res > 0)
  {
    if (age < 20)
    {
      printf("You are young.\n");
    }else{
      printf("You are old.\n");
    }
  }else{
    printf("You didn't enter a number.\n");
  }
  

  return 0;
}