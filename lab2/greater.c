#include <stdio.h>

int main (){

  int a,b,c;

  printf("n1\n");
  scanf("%d", &a);
  
  printf("n2\n");
  scanf("%d", &b);
  
  printf("n3\n");
  scanf("%d", &c);

  if (a>b && a>c){
    printf("%d is greatest \n",a);
    if (b<c && b<a){
      printf("%d is the second greatest", b);
   } else {
      printf("%d is the second greatest",c);
    }
    
} else if (b >a && b > c) {
  printf("%d is the greatest", b);
    if (a > c && a < b ) {
      printf ("%d is the second greatest", a);
    } else {
      printf("%d is the second greatest", c);
    }
  
} else {
  printf("c is the greatest");
  if ( a > b){
    printf("%d is the second greatest",a);
  } else {
    printf(" b is the second greatest");
  }
}

  return 0;
  
}
