#include "../include/promptFloat.h"
#include "../include/utils.h"
#include <stdio.h>

float promptFloat(const char* prompt){
	float value;
	float input;

	while (1) {
    printf("%s", prompt);
    input = scanf(" %f", &value);

    if (input != 1){
			printf("\033[1;31mError: This is not a valid number.\033[0m\n");
			printf("\n");
			flushInput();
			continue;
		}
			
		break;
	}

	return value;
}
