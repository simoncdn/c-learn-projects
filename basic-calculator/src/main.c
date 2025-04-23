#include "math.c"
#include "promptFloat.c"
#include "promptOperator.c"
#include <stdio.h>

int main(void){
	float a = promptFloat("Enter your first number: ");
	operator_t operator = promptOperator("Choose your operator (+, -, /, *): ");
	float b = promptFloat("Enter your second number: ");

	float total = calculate(a, b, operator);

	printf("Total: %.2f\n", total);

	return 0;
}
