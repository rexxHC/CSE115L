#include <stdio.h>

int main(){

int a,b;
printf("enter numbers a and b: ");
scanf("%d %d", &a, &b);

int x = a > b;

switch (x){
  case 1:
    printf("a is greater");
  break;
  case 0:
    printf("b is greater");
  break;
  }

return 0;
}
