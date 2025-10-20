#include <math.h>
#include <stdio.h>

int main(){

  int rad, side;

  printf("enter length of the side of the square : ");
  scanf("%d", &side);

  printf("enter radius of circle : ");
  scanf("%d", &rad);

  float di = sqrtf((rad * rad) + (side * side));

  if (di >= rad){
    printf("square can fit inside the circle\n");
  } else {
    printf("square cannot fit inside the circle\n");
  }
  
  return 0;
}
