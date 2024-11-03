#include <stdio.h>

// Ejercicio 2 - TP guia de funciones - Martin, Federico Sebastian

const double PI = 3.14159;

double calcular_area_circulo(double);

double calcular_perimetro_circulo(double);

int main(){
	
	double radio;
	
	printf("Ingrese el valor del radio del circulo: ");
	scanf("%lf", &radio);
	
	while(radio <= 0){
		printf("ERROR: Ingrese un valor mayor a cero: ");
		scanf("%lf", &radio);
	}
	
	printf("\nEl area del circulo es: %.3lf\n", calcular_area_circulo(radio));
	printf("El perimetro del circulo es: %.3lf\n", calcular_perimetro_circulo(radio));
	
	return 0;
}

double calcular_area_circulo(double radio){
	
	return (PI * radio * radio);	
	
}

double calcular_perimetro_circulo(double radio){
	
	return (2 * PI * radio);
	
}
