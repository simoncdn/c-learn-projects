#include <stdio.h>
#include "../include/promptOperator.h"
#include "../include/validator.h"

float calculate(float a, float b, operator_t op){
	switch(op){
		case ADD:
			return a + b;
		case SUB:
			 return a - b;
		case DIV:
			if(!isSafeDivision(b)){
				printf("\033[1;31mError:\033[0m Division by zero is not allowed.\n");
				return 0;
			}
			return a / b;
		case MUL:
			return a * b;
		default:
			printf("\033[1;31mError:\033[0m Invalid operator.\n");
			return 0;
	}
}
