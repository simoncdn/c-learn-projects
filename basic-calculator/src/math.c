#include "math.h"
#include <stdio.h>

float add(float a, float b) {
	return a + b;
}

float substract(float a, float b){
	return a - b;
}

float multiply(float a, float b){
	return a * b;
}

float divide(float a, float b){
	if (b == 0) {
		printf("Error: You can't devide by 0 value!\n");
		return 0;
	}

	return a / b;
}
