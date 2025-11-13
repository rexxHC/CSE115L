#include <stdio.h>

int main(){
  int n;
  printf("enter number: ");
  scanf("%d", &n);
  printf("factors : ");

  for(int i = 1; i <= n; i++){

      if(n % i == 0) {
        
          if(i % 2 != 0){
              printf("%d\n", i);
      }
    }
  }
}

