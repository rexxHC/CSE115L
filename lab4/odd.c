#include <stdio.h>

int main(){

	int n;
	printf("enter number: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i = i + 2){
		
		printf("%d\n", i);
	}
}
