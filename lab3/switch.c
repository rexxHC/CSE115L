#include <stdio.h>
int main(){

	char c;
	printf("enter fruit: ");
	scanf("%c", &c);
	printf("\n");

	switch(c){
		case 'M' :
						printf("price is tk 500");
			break;
		case 'm' :
						printf("price is tk 500");
			break;
		case 'A' :
						printf("price is tk 250");
			break;
		case 'a' :
						printf("price is tk 250");
			break;
		case 'B' :
						printf("price is tk 130");

			break;
		case 'b' :
						printf("price is tk 130");

			break;
		case 'C' :
						printf("price is tk 270");
			break;
		case 'c' :
						printf("price is tk 270");
			break;

	}
}
