#include <math.h>
#include <stdio.h>

int main(){

  double valueX;

  printf("enter value (x): ");
  scanf("%lf", &valueX);

  
  double term = 1;
  double sum = 0;
  int n = 0;

  while(fabs(term) > 1e-10){
    double numerator = pow(valueX, n);
    double denominator = 1;

    for (int i = 1; i <= n; i++){
      denominator = denominator * i;
    }

    term = numerator / denominator;
    sum = sum + term;
    n++;
  }
  printf("Taylor's series for e to the power x value for your input is %lf", sum);
}
