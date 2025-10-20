#include <stdio.h>

int main (void){

  float n1, n2, n3;

  printf("Enter n1:");
  scanf("%f", &n1);

  printf("Enter n2:");
  scanf("%f", &n2);

  printf("Enter n3:");
  scanf("%f", &n3);

  float average = (n1 + n2 +n3) / 3 ;

  printf (" Your average is %f \n", average);

  
  return 0;
}
