#include <stdio.h>

int main(){
  int n;
  printf("enter number: ");
  scanf("%d", &n);
  int prime=0;
  
  for(int i = 2; i < n; i++){
    if(n % i == 0){
      prime = 1;
      break;
      
    }
  } if(prime == 0){
    printf("Prime");
  } else {
    printf("Not Prime");
  }
}
