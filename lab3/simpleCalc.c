#include <stdio.h>

int main (){
  //switch(intvalue){
  //  case 0:
  // ksks
  // break;
  // case 1:
  // skjdlaksdj
  // break;
  // default:
  // alkjflsa
  // break;
  //
  // }
  int a,b;
  printf("enter numbers: ");
  scanf("%d %d", &a, &b);

  char c;
  printf("enter operator");
  scanf(" %c", &c);
  //char > int
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
    
    default:
      printf("invalid operator");
    break;

  }

return 0;
}
