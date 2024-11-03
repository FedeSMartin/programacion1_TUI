#include <stdio.h>

int main() {
	
	int numero, i;
	
	long long int factorial;
	
	printf("\nPrograma para calcular factoriales\n");
	
	printf("\nIngrese numero entero positivo: ");
	scanf("%d", &numero);
	
	// se coloca advertecia, por falta de librerias para numeros mayores de 20
	if(numero > 20) { 
		printf("\n                                 (!)\n");
		printf("\n                         Ingrese un valor menor\n");
		printf("\n   Por restricciones de memoria, no puede calcularse un numero mayor a 20.\n");
	}
	
	// evita ingreso de numeros negativos
	while(numero < 0) { 
		printf("\n### Error, reingrese un valor correcto, entero positivo: ");
		scanf("%d", &numero);
	}

	factorial = 1;
	
	for(i = 1 ; i <= numero ; i++) {
		
		factorial = factorial * i;
		
	}
	
	printf("\nEl factorial de %d es %lld\n", numero, factorial);
	
	return 0;
}