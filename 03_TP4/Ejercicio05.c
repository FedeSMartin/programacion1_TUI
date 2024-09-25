#include <stdio.h>

// Ejercicio 5, Trabajo Practico 4 - Martin Federico

int main(){
	
	int empleados, genero, totalMujeres, totalHombres, sueldoMujer,  sueldoHombre;
	int sueldosTotalesMujeres, sueldosTotalesHombres, maxSueldoMujer, minSueldoMujer;
	int maxSueldoHombre, minSueldoHombre, mujeresGananMas500, hombresGananMenos400;
	
	genero = 0;
	
	totalMujeres = 0;
	totalHombres = 0;
	
	sueldosTotalesMujeres = 0;
	sueldosTotalesHombres = 0;
	
	mujeresGananMas500 = 0;
	hombresGananMenos400 = 0;
	
	printf("\nPrograma de filtro de sueldos:\n\n");
	
	empleados = 0;
	
	while(empleados < 10) {
		
		do { // se evita la carga de otra opcion por error
			
            printf("Ingrese genero del empleado (1 para femenino y 2 para masculino):\n");
            scanf("%i", &genero);
            
        } while (genero != 1 && genero != 2); // si el valor es diferente al pedido, se vuelve a repetir la pregunta
		
		if(genero == 1) {
			
			printf("Ingrese sueldo de la empleada:\n");
			scanf("%i", &sueldoMujer);
			
			// se suman los sueldos para totalizarlos
			sueldosTotalesMujeres += sueldoMujer;
			
			// se cuentan cuantas mujeres hay
			totalMujeres++;
			
			// se inicializan en la "primera vuelta"
			if(totalMujeres == 1) {
				
				maxSueldoMujer = sueldoMujer;
				minSueldoMujer = sueldoMujer;
				
			}
			
			if(sueldoMujer > maxSueldoMujer) { // filtrado de mayor sueldo femenino
				
				maxSueldoMujer = sueldoMujer;
				
			}else if(sueldoMujer < minSueldoMujer) { // filtrado de menor sueldo femenino
				
				minSueldoMujer = sueldoMujer;
				
			}
			
			if(sueldoMujer > 500) { // se establece cuantas mujeres ganan mas de 500 pesos
				mujeresGananMas500++;
			}
			
		}else if(genero == 2) {
			
			printf("Ingrese sueldo del empleado:\n");
			scanf("%i", &sueldoHombre);
			
			// se suman los sueldos para totalizarlos
			sueldosTotalesHombres += sueldoHombre;
			
			// se cuentan cuantas hombres hay
			totalHombres++;
			
			// se inicializan en la "primera vuelta"
			if(totalHombres == 1) {
				
				maxSueldoHombre = sueldoHombre;
				minSueldoHombre = sueldoHombre;
				
			}
			
			if(sueldoHombre > maxSueldoHombre) { // filtrado de mayor sueldo masculino
				
				maxSueldoHombre = sueldoHombre;
				
			}else if(sueldoHombre < minSueldoHombre) { // filtrado de menor sueldo masculino
				
				minSueldoHombre = sueldoHombre;
				
			}
			
			if(sueldoHombre < 400) { // se establece cuantos hombres ganan menos de 400 pesos
				
				hombresGananMenos400++;
				
			}
			
		}
		
		empleados++;
	}
	
	printf("\nResultados:\n");
	printf("En total son %i mujeres y %i hombres\n", totalMujeres, totalHombres);
	printf("La suma total de los sueldos de las mujeres es $%i\n", sueldosTotalesMujeres);
	printf("La suma total de los sueldos de los hombres es $%i\n", sueldosTotalesHombres);
	printf("El mayor sueldo de hombres es $%i y el menor es $%i\n", maxSueldoHombre, minSueldoHombre);
	printf("El mayor sueldo de mujeres es $%i y el menor es $%i\n", maxSueldoMujer, minSueldoMujer);
	printf("Las mujeres que ganan mas de $500 son %i\n", mujeresGananMas500);
	printf("Los hombres que ganan menos de $400 son %i\n", hombresGananMenos400);
	printf("\n\nFin del programa.");
	
	return 0;
}