#include <stdio.h>

int main(){
  int n;
  printf("enter n: ");
  scanf("%d", &n);

  int original = n;
  int remainder;
  int reverse = 0;
  
  while (n != 0){
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n = n / 10; 
  }
  printf("reverse : %d", reverse);
      int prime=0;
  
  for(int i = 2; i < reverse; i++){
    if(reverse % i == 0){
      prime = 1;
      break;
      
    }
  } if(prime == 0){
    printf(". Prime");
  } else {
    printf(". Not Prime");
  }
 
}
