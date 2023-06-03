#include <stdio.h>

//usecase
void add5 (int *x){
  *x = *x + 5;
}


int main(int argc, char const *argv[])
{
  int a = 0;

  int *b = &a;

  printf("a = %d\n", a);
  printf("b = %p\n", b);

  
  //dereferene operator
  printf("Nilai yang ditunjuk pointer b = %d\n", *b);

  *b = 20;

  printf("Nilai a sekarang adalah %d\n", a);

  add5(&a);
  printf("Nilai a sekarang adalah %d\n", a);


  return 0;
}
