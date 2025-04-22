#include <stdio.h>

int main(void){
	int a, b;
  char operator;
  int total;

  printf("Entrez le premier nombre: ");
  scanf("%d", &a);

  printf("Entrez l'opérateur (+, -, *, /): ");
  scanf(" %c", &operator);  // le petit espace avant %c est important !

  printf("Entrez le deuxième nombre: ");
  scanf("%d", &b);

	printf("Total: %d\n", total);
	return 0;
}
