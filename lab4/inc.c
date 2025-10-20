#include <stdio.h>

int main(){

	int n;
	int sum =0;
	
	scanf("%d", &n);
	
	for(int i=3;i<=n;i+=4){
		sum = sum + i;
}

	printf("%d", sum);
}
