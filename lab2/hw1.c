#include <stdio.h>

int main(){

  float a,b,c;

  printf("enter sides of a traingle : ");
  scanf("%f %f %f", &a, &b, &c);

  if ( a + b > c || a + c > b || b + c > a){
      printf("valid triangle\n");
  } else {
    printf("invalid triangle\n");
  }

  return 0; 
  
}
