#pragma once

#include "utils.c"
#include "validator.c"
#include <stdio.h>

operator_t promptOperator(const char* prompt){
	char value;
	char input;

	while(1){
		printf("%s", prompt);
		input = scanf(" %c", &value);

		if(input != 1 || isValidOperator(value)){
			printf("\033[1;31mError: Invalid input.\033[0m\n");

			flushInput();
      continue;
		}

		break;
	}

	return value;
}
