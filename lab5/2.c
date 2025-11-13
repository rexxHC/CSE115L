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
  if(original == reverse){
    printf("palindrome");
  } else {
    printf("not a palindrome");
  }
}
