#include <stdio.h>

int main(){

  float a,b,c;

  printf("enter angles of a traingle : ");
  scanf("%f %f %f", &a, &b, &c);

  if(a<= 0 || b <= 0 || c <= 0){
    printf("invalid triangle");
  }
  else if ( a + b + c == 180){
      printf("valid triangle\n");
  } else {
    printf("invalid triangle\n");
  }

  return 0; 
  
}

