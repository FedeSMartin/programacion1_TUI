#include <stdio.h>

// Ejercicio 2 - Trabajo Practico 2 - Martin Federico

int main() {
	
	float pagoXHora, horaAdicional, pagoSemanal, horasSemanales, plusHoraExtra, horasExtra, pagoHorasExtra, pagoSemanalTotal;
	
	printf("Programa para calculo de salario semanal \"ALTO RANCHO S.A.\"\n\n");
	printf("Ingrese horas semanales trabajadas: \n");
	
	// ingreso de horas trabajadas semanalmente
	scanf("%f", &horasSemanales);
	
	pagoXHora = 250;
	
	// En caso que se exedan las 30hs semanales, se paga un plus por cada hora exedente
	plusHoraExtra = 50;
	
	pagoHorasExtra = 0;
	
	if(horasSemanales > 30) { // si las horas son mas de 30, se firltran las horas extras
		horasExtra = horasSemanales - 30;
		pagoHorasExtra = horasExtra * (pagoXHora + plusHoraExtra);
		pagoSemanal = pagoXHora * (horasSemanales - horasExtra);
		
	}else{
		pagoSemanal = horasSemanales * pagoXHora;
		
	}
	
	pagoSemanalTotal = pagoSemanal + pagoHorasExtra;
	
	printf("\nCantidad de horas extras trabajadas: %.2fhs\n", horasExtra);
	printf("Pago por horas extras es: $%.2f\n", pagoHorasExtra);
	printf("Pago por horas semanales es: $%.2f\n", pagoSemanal);
	printf("\nEl pago semanal total es: $%.2f", pagoSemanalTotal);
	
	return 0;
}