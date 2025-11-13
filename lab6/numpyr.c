#include <stdio.h>

int main(){

  int n;
  printf("enter number: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; ++i){
    for(int space = n; space >= i; space--){
        printf(" ");
      }

    for(int num = 1; num <= i; num++){
      printf("%d ",num);
    }

    printf("\n");
  }
}
