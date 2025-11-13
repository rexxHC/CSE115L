#include <stdio.h>
int main(){

	char c;
	printf("enter fruit: ");
	scanf("%c", &c);
	printf("\n");

	switch(c){
		case 'M' :
		case 'm' :
				printf("price is tk 500");
				break;
		case 'A' :
		case 'a' :
				printf("price is tk 250");
				break;
		case 'B' :
		case 'b' :
				printf("price is tk 130");
				break;
		case 'C' :
		case 'c' :
				printf("price is tk 270");
				break;

	}
}
