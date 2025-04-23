#include "math.c"
#include <stdio.h>

enum Operator {
	ADD = '+',
	SUB = '-',
	DIV = '/',
	MUL = '*',
};

int main(void){
	float a, b;
	int input;
  char operator;
  float total;


	// 1st Step
	printf("Enter a number: ");
	input = scanf("%f", &a);

	if(input != 1 ){
		printf("Error: This is not a valid integer.\n");
		return 1;
	}

	// 2nd Step
	printf("Choose your operator (+, -, /, *): ");
	scanf(" %c", &operator);

	if(operator != ADD && operator != SUB && operator != DIV && operator != MUL){
		printf("Error: %c is not a valid operator.\n", operator);
		return 1;
	} 

	// 3rd Step
	printf("Enter your second number: ");
	input = scanf("%f", &b);

	if(input != 1){
		printf("Error: This is not a valid integer.\n");
		return 1;
	}

	// 4th Step
	switch(operator){
		case ADD:
			total = add(a, b);
			break;
		case SUB:
			total = substract(a, b);
			break;
		case DIV:
			total = divide(a, b);
			break;
		case MUL:
			total = multiply(a, b);
			break;
		default:
			printf("Sorry this case doesn't work.\n");
	}

	printf("Total: %.2f\n", total);

	return 0;
}
