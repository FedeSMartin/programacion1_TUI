#include <stdio.h>
#include <stdlib.h>

// Trabajo practico N° 4 - Ejerccicion 1 - Martin Federico

int main() {
	
	int acumulador = 0;
	int sumatoria = 0;
	
	while(acumulador < 50){
		
		int num = rand() % 200;
		
		if(num > 100){ // imprime numero mayor a 100
			printf("\nNumero mayor a 100: %i\n------", num);
			
		}else{ // suma los valores menores a 100 y muestra el resultado parcial
			printf("\nNumero < 100 aleatorio es: %i\n", num);
			sumatoria = sumatoria + num;
			printf("Suma parcial de numeros < 100 = %i\n------", sumatoria);
			
		}
	
		acumulador++; // contador para evitar el bucle infinito ;)
	}
	
	// muestra la suma total de los numeros menores de 100
	printf("\n ########## Suma total de numeros < a 100 = %i ##########" , sumatoria);
	
	return 0;
}