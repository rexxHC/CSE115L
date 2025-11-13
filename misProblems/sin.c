#include <math.h>
#include <stdio.h>

int main(){

  double angle;

  printf("Enter Angle (in degrees): ");
  scanf("%lf", &angle);

  double x = angle * (M_PI / 180);
  double term = x;
  double sum = 0;
  int n = 0;
  
  while(fabs(term) >= 1e-15){

    double numerator = pow(-1, n) * pow(x, (2 * n + 1));

    double denominator = 1;
    int lim = (2 * n + 1);
    for(int i = 1; i <= lim; i++){
      denominator = denominator * i;
    }

    term = numerator / denominator;
    sum = sum + term;
    n++;
  }

  printf("sin(%lf) is : %lf", angle, sum);
  
}
