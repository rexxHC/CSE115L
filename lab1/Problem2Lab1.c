#include <stdio.h>

int main(void){

  int n1, n2;

  printf ("n1: \n");
  scanf ("%d", &n1);

  printf ("n2: \n");
  scanf ("%d", &n2);
  if (n2 == 0 || n1 == 0){
    printf("invalid number for division");
  } else {
  int sum = n1 + n2;
  int difference = n1 - n2;
  int product = n1 * n2;
  int division = n1 / n2;
  int remainder = n1 % n2;

  printf ("sum: %d \n", sum);
  printf ("difference: %d \n", difference);
  printf ("product: %d \n", product);
  printf ("division: %d \n", division);
  printf ("remainder: %d \n", remainder);

  }



  return 0;
}
