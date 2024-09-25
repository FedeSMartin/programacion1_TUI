#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int numA, numB, aux;
	printf("Programa de intercambio de variables.\n");

	printf("Ingrese un valor numerico entero para la primer variable:");
	scanf("%d", &numA);
	printf("Ingrese un valor numerico entero para la segunda variable:");
	scanf("%d", &numB);

	printf("\n");
	printf("El valor de la primera variable antes de la conversion es: %d\n", numA);
	printf("El valor de la segunda variable antes de la conversion es: %d\n", numB);

	aux = numA;
	numA = numB;
	numB = aux;

	printf("\n");
	printf("El valor de la primera variable despues de la conversion es: %d\n", numA);
	printf("El valor de la segunda variable despues de la conversion es: %d\n", numB);

	return 0;
}
