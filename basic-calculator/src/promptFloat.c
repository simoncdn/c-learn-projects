#pragma once

#include "../include/promtFloat.h"
#include <stdio.h>
#include "utils.c"

float promptFloat(const char* prompt){
	float value;
	float input;

	while (1) {
    printf("%s", prompt);
    input = scanf("%f", &value);

    if (input == 1) break;

    printf("\033[1;31mError: This is not a valid number.\033[0m\n");
		printf("\n");

		flushInput();
	}

	return value;
}
