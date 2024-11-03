#include <stdio.h>
// Ejercicio 1 - TP Funciones - Martin, Federico Sebastian


int contarDivisores(int);

int main(){
	
	int ingresado;
	
	printf("Ingrese numero entero positivo:\n");
	scanf("%d", &ingresado);
	
	int resultadoFinal = contarDivisores(ingresado);
	
	printf("El numero ingresado tiene %d numeros divisores.", resultadoFinal);
	
	return 0;
}

// Apartado de funciones

int contarDivisores(int numero) { // cuenta la cantidad de divisores de un numero ingresado
	
	int contador;
	int i;
	
	for(i = 1; i <= numero; i++) {
		
		if(numero % i == 0){
			contador++;
		}
		
	}
	
	return contador;
}