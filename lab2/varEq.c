#include <stdio.h>
#include <math.h>

int main (){
	int x;
	printf("number: ");
	scanf("%d",&x);
	printf("\n");
	
	float result = (5*x*x*x) - (4*x*x) + sqrt(x) + 3 ;

	printf("result is %f",result);

	return 0;
}
