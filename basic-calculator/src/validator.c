#include "../include/validator.h"
#include "../include/promptOperator.h"

int isValidOperator(char c){
	return c != ADD && c != SUB && c != DIV && c != MUL;
}

int isSafeDivision(float divisor){
	return divisor != 0.0f;
}
