#include "math.h"
#include <stdio.h>

int add(int a, int b) {
		return a + b;
}

int substract(int a, int b){
	return a - b;
}

int multiply(int a, int b){
	return a * b;
}

int divide(int a, int b){
	if (b == 0) {
		printf("Error: You can't devide by 0 value!\n");
		return 0;
	}
	return a / b;
}
