#include <stdio.h>

int main(){
	int n;
	printf("enter integer: ");
	scanf("%d", &n);

	int count;

	while(n != 0){
		if (n % 10 != 0){
			count ++;
			n = n / 10;
		}
	} printf("%d\n",count);
}
