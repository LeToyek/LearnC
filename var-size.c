#include <stdio.h>

void check_bool(int value){
  if(value){
    printf("true\n");
  }else{
    printf("false\n");
  }
}

int main(int argc, char const *argv[])
{
  check_bool(0);
  check_bool(1);
  check_bool(-1);
  check_bool(213012);
  return 0;
}
