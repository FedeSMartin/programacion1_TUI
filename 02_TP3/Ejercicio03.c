#include <stdio.h>

// Ejercicio 3 - Trabajo Practico 2 - Martin Federico

int main() {
	
	float notaAlumno;
	
	printf("ingrese nota del alumno: \n");
	scanf("%f", &notaAlumno);
	
	if(notaAlumno >= 6) { 
		printf("El alumno se encuentra en situacion Regular");
	}else{
		printf("El alumno se encuentra en situacion Libre");
	}
	
	return 0;
}