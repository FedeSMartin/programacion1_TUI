#include <stdio.h>

// Ejercicio 1 - Trabajo practico de repaso - ciclo FOR - Federico Sebastian Martin

int main() {
	
	int numero, numMax, numMin;
	
	printf("Programa para ver valores maximos y valores minimos de 10 numero que ingreso.\n\n");
	
	for(int i = 0 ; i < 10 ; i++) {
		
		printf("Ingrese un numero entero: ");
		scanf("%d", &numero);
		
		if(i == 0) { /*en la primer vuelta, se le asigna el valor de "numero" a 
						"numMax" y "numMin", ya que no tiene contra quien compararse*/
			numMax = numero;
			numMin = numero;
			
		}else{
			
			if(numero > numMax) {
				
				numMax = numero;
				
			}else if (numero < numMin){
				
				numMin = numero;
				
			}
			
		}
		
	}
	printf("\n--------------------------\n\n");
	printf("El mayor numero ingresado es %d\n", numMax);
	printf("El menor numero ingresado es %d\n", numMin);
	
	return 0;
}