#include <stdio.h>

int main(){

  int n;
  printf("enter number: ");
  scanf("%d", &n);

  float sum = 0;
  float term;

  for(int i = 1; i <= n; i++){

    term = 0.0;
    for(int f = 1; f <= i; f ++){
      term = term + 1.0 / f;
    }

    sum = sum + term;
  } printf("%f is the sum", sum);
}
