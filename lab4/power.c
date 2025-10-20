#include <stdio.h>

int main(){
  int n;
  int p;

  printf("enter number: ");
  scanf("%d", &n);

  printf("enter power: ");
  scanf("%d", &p);

  int prod;
  
  for (int i=0; i <= p; i++){
      prod = n*n;  
  }

  printf("%d", prod);
}

