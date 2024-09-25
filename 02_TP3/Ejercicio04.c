#include <stdio.h>

// Ejercicio 4 - Trabajo Practico 2 - Martin Federico

int main() {
	
	float notaAlumno, porcentajeAsistencia;
	
	printf("Por favor ingrese la nota promedio del alumno: \n");
	scanf("%f", &notaAlumno);
	
	printf("Por favor ingrese el procentaje de asistencia: \n");
	scanf("%f", &porcentajeAsistencia);
	
	if(notaAlumno >= 6 && porcentajeAsistencia >= 75) {
		printf("Alumno Regular.");
	}else{
		printf("Alumno Libre.");
	}
	
	return 0;
}