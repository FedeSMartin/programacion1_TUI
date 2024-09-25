#include <stdio.h>

// Ejercicio 2, Trabajo Practico 4 - Martin Federico

int main() {
	
	float dividendo, divisor, resultado, intermedio;
	int vecesRestado = 0;
	
	printf("Programa de division mediante restas:\n");
	
	printf("Ingrese dividendo:\n");
	scanf("%f", &dividendo);

	printf("Ingrese divisor:\n");
	scanf("%f", &divisor);
	
	// variable "auxiliar"
	intermedio = dividendo;
	
	if(dividendo > 0 && divisor > 0) { // se limita la entrada de ceros
	
		while(intermedio >= divisor) {
			
			resultado = intermedio - divisor;
			intermedio = resultado;

			vecesRestado++;
		}
		
	}else{
		
		printf("Dividendo o divisor no pueden ser 0 (CERO).\nVerifique sus datos y vuelva a comenzar.");
	}
	
	printf("Se realizaron %i restas y el resto es %.2f.", vecesRestado, intermedio);
	
	return 0;
}