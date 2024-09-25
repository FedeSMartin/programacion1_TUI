#include <stdio.h>

// Ejercicio 4, Trabajo Practico 4 - Martin Federico

int main() {
	
	int lluviaDelDia, diasSemana, minLluvia, maxLluvia, diaMax, diaMin;
	
	float promedio, sumaLluviaDias;
	
	diasSemana = 1;
	lluviaDelDia = 0;
	sumaLluviaDias = 0;
	
	// las siguientes se inicializan en cero (0) para evitar problemas
	maxLluvia = 0;
	minLluvia = 0;
	
	diaMax = 0;
	diaMin = 0;
	
	printf("Programa para calculo de precipitaciones:\n\n");
	
	while (diasSemana <= 7) {
		
		printf("Ingrese la precipitacion en milimetros del dia:\n");
		scanf("%i", &lluviaDelDia);
		
		if(diasSemana == 1) { // se inicializan las variables para comparar
			
			maxLluvia = lluviaDelDia;
			minLluvia = lluviaDelDia;
			diaMax = diasSemana;
			diaMin = diasSemana;
			
		}
		
		if(lluviaDelDia > maxLluvia) { // se comparan los mayores valores
			
			maxLluvia = lluviaDelDia;
			diaMax = diasSemana;
			
		}else if(lluviaDelDia < minLluvia) { // se comparan los menores valores
			
			minLluvia = lluviaDelDia;
			diaMin = diasSemana;

		}
		
		sumaLluviaDias = lluviaDelDia + sumaLluviaDias; // se suman los valores para realizar el promedio
		
		diasSemana++;
		
	}
	
	promedio = sumaLluviaDias / 7;
	
	printf("El dia %i la lluvia maxima fue de %i milimetros\n", diaMax, maxLluvia);
	
	printf("El dia %i la lluvia minima fue de %i milimetros\n", diaMin, minLluvia);
	
	printf("El promedio de lluvias es: %.02f milimetros", promedio);
	
	return 0;
	
}
