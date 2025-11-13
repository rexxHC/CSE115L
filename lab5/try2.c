#include <stdio.h>

int main(){
  int n;
  printf("enter number: ");
  scanf("%d", &n);
  int sum = 0;

  while(n != 0){
    int term = n % 10;
    n = n / 10;
    sum = sum + term;
  }
  printf("%d", sum);
  
}
