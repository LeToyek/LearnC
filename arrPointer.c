#include <stdio.h>

int print_array(int arr[], int size){
  int i;
  for ( i = 0; i < size; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  printf("\n");
  
}

int main(int argc, char const *argv[])
{
  //array = pointer

  int a[5] = {1,2,3,4,5};
  int i;
  int *p = a;

  print_array(a, 5);
  print_array(p, 5);

  a[2] = 20;
  print_array(a, 5);
  print_array(p, 5);

  //pointer arithmatic
  printf("pointer arithmatic\n");
  //pointer menunjuk element pada index 1 (0 + 1)

  p++;
  printf("p = %d\n", *p);
  print_array(p, 4);
  print_array(a, 5);

  return 0;
}
