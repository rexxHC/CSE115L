#include <math.h>
#include <stdio.h>

int main(){

  double angle;

  printf("Enter angle in degrees: ");
  scanf("%lf", &angle);

  double x = angle * (M_PI / 180);
  double term = 1;
  double sum = 0;
  int n = 0;

  while(fabs(term) >= 1e-10){

    double numerator = pow(-1, n) * pow(x, (2 * n));
    double denominator = 1;

      for (int i = 1; i <= (2 * n); i++){
        denominator = denominator * i;
      }

    term = numerator / denominator;
    sum = sum + term;
    n++;
  }
  printf("cos(%lf) is %lf", angle, sum);
}
