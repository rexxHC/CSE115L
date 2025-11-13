
#include <stdio.h>

int main(){

  //getting value from a user
  
  int n;
  float f;
  char c;
  
  printf("Enter int: \n");
  scanf("%d ", &n);
  
  printf("Enter float: \n");
  scanf("%f ", &f);

  printf("Enter char: \n");
  scanf(" %c ", &c);
  

  printf("Your int %d \n", n);
  printf("your float %f \n", f);
  printf("Your char %c \n",c);
  

  
  
  return 0;
}
