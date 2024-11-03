#include <stdio.h>

//Ejercicio Complementario Integrador - Martin Federico

int main(){
	
	int cantidadAlumnos, nota1, nota2, asistencia;
	float promedio;
	
	cantidadAlumnos = 20;
	
	printf("\nPrograma para verificacion de condicion de los Alumnos.\n");
	printf("Ingrese notas del 0 al 10 y asistencia en porcentaje del 0 al 100.\n");
	
	for(int i = 1 ; i <= cantidadAlumnos ; i++){
		
		printf("\nIngrese la nota del PRIMER PARCIAL del alumno %d: ", i);
		scanf(" %d", &nota1);
		
		// para evitar ingresar rangos no permitidos de notas
		while(nota1 < 0 || nota1 > 10){
			printf("\nERROR: Ingrese un NUMERO ENTERO entre 0 y 10: ");
			scanf(" %d", &nota1);
		}
		
		printf("\nIngrese la nota del SEGUNDO PARCIAL del alumno %d: ", i);
		scanf(" %d", &nota2);
		
		// para evitar ingresar rangos no permitidos de notas
		while(nota2 < 0 || nota2 >10){
			printf("\nERROR: Ingrese un NUMERO ENTERO entre 0 y 10: ");
			scanf(" %d", &nota2);
		}
		
		printf("\nIngrese ASISTENCIA en numeros del 0 al 100: ", i);
		scanf(" %d", &asistencia);
		
		// para evitar ingresar "porcentajes" no permitidos de asistencias
		while(asistencia < 0 || asistencia > 100){
			printf("\nERROR: Ingrese un NUMERO ENTERO entre 0 y 100: ");
			scanf(" %d", &asistencia);
		}
		
		promedio = (nota1 + nota2) / 2;
		
		if(promedio < 6 && asistencia < 75){
			
			printf("\nAlumno en condicion LIBRE.\n");
			
		}else if(promedio >= 6 && promedio < 8 && asistencia >= 75){
			
			printf("\nAlumno en condicion REGULAR.\n");
		
		}else if(promedio >= 8 && asistencia >= 75){
			
			printf("\nAlumno en condicion de PROMOCIONADO.\n");
		
		}else{ // en el caso que no se cumpla con la asistencia
			
			printf("\nAlumno en condicion LIBRE.\n");
			
		}
		
	}
	
	printf("\nPROGRAMA FINALIZADO... ?\n");
	printf("\nXD\n");
	
	return 0;
}