#include <stdio.h>

int main(){

  int year;
  printf("Enter year: ");
  scanf("%d", &year);
  printf("\n");
    // (leap years are divisible by 4 but not divisible by 100) or they can be divided by 400
    // 
  if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    
      printf("%d is leap year\n", year);
  } else {
      printf("%d is not a leap year\n",year);
  }

  return 0;
  
}
