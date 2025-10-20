#include <stdio.h>

int main(){

  int n;
  int i = 1;
  int fact = 1;  
  printf("enter number: ");
  scanf("%d", &n);

  for (; i <= n; i++){
    fact = fact * i;

  }
  printf("%d is the factorial", fact);
}
