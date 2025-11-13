#include <stdio.h>

int main (){

  int a,b,c;

  printf("a\n");
  scanf("%d", &a);
  
  printf("b\n");
  scanf("%d", &b);
  
  printf("c\n");
  scanf("%d", &c);

if(a > b && a > c){
  printf("a(%d) is the greatest", a);
} else if(b > a && b > c){
  printf("b(%d)is the greatest", b);
} else {
  printf("c(%d)is the greatest", c);
}

}
