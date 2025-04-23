typedef enum Operator {
	ADD = '+',
	SUB = '-',
	DIV = '/',
	MUL = '*',
} operator_t;

operator_t promptOperator(const char* prompt);
