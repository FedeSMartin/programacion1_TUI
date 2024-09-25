#include <stdio.h>

// Ejercicio 3, Trabajo Practico 4 - Martin Federico

int main() {
	
	int min, max, resto, hallados, maxPrint;
	
	printf("Programa de valores hallados entre un minimo y un maximo.\n\n");
	
	min = 20;
	max = 50;
	
	hallados = 0;
	
	// se guarda valor para poder imprimirlo despues
	maxPrint = max;
	
	while(max >= min) {
		
		resto = max % 2;
		
		if(resto == 0) {
			printf("%i Es par\n", max);
			hallados++;
		}
		
		max--;
		
	}
	
	printf("\nLa cantidad de numeros pares hallados entre %i y %i, son %i.", maxPrint, min, hallados);
	
	return 0;
}