#include <stdio.h>

int main() {
	
	int i;
	float resultado, numero; /*la variable numero, se toma como float, ya que en el bucle while que
							   evita que se ingrese numeros menores a 1, al ingresar un numero con coma,
							   el programa se rompe.*/
	
	printf("\nPrograma para calculo de promedios.\n");
	
	for(i = 0 ; i < 10 ; i++) {
		
		printf("Ingrese un numero entero mayor a cero: ");
		scanf("%f", &numero);
		
		while(numero <= 0) { //evita ingreso de valores menores a cero y negativos
			
			printf("##### Error: Ingrese un numero entero mayor a cero ##### : ");
			scanf("%f", &numero);
			
		} 
		
		resultado+=numero;
		
	}
	
	resultado = resultado/i;
	
	printf("\nEl promedio es: %.2f", resultado);
	
	return 0;
	
}