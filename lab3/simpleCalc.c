#include <stdio.h>

int main (){

  int a,b;
  printf("enter numbers: ");
  scanf("%d %d", &a, &b);

  char c;
  printf("enter operator");
  scanf(" %c", &c);

  switch(c){

    case '+' :
      printf(" %d is the ", a + b);
    break;

    case '-' :
      printf(" %d is the ", a - b);
    break;

    case '/' :
      printf(" %d is the ", a / b);
    break;

    case '*' :
      printf(" %d is the ", a * b);
    break;

  }

return 0;
}
