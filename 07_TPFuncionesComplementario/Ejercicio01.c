#include <stdio.h>
#include <stdbool.h>

// Ejercicio 1 - TP Actividad Complementaria: Funciones - Martin Federico Sebastian

const double PI = 3.14159;

int calculo_area_rectangulo();
double calculo_area_circulo();
double calculo_area_triangulo();
int calculo_perimetro_rectangulo();
double calculo_perimetro_circulo();
int calculo_perimetro_triangulo();

void cartel_inicio_programa();
void menu_principal();
void cartel_fin_programa();

int main(){
	
	cartel_inicio_programa();
	
	int item_menu;
	bool salir_programa = false;
	
	while(salir_programa == false) {
		
		menu_principal();
		
		scanf("%d", &item_menu);
		
		switch(item_menu) {
			
			case 0: // salida del menu y finalizacion del programa.
				salir_programa = true;
				break;
							
			case 1:
				calculo_area_rectangulo();
				break;
			
			case 2:
				calculo_area_circulo();
				break;
				
			case 3:
				calculo_area_triangulo();
				break;
			
			case 4:
				calculo_perimetro_rectangulo();
				break;
				
			case 5:
				calculo_perimetro_circulo();
				break;
			
			case 6:
				calculo_perimetro_triangulo();
				break;
			
			default:
				printf("\nERROR: <<< Ingrese valor correcto >>> : ");
				scanf("%d", &item_menu);
				break;
		}
		
	}
	
	cartel_fin_programa();
	
	return 0;

}

// formulas de calculo

int formula_area_rectangulo(int base, int altura){
	
	return (base * altura);
	
}

double formula_area_circulo(double radio){
	
	return (PI * radio * radio);
	
}

double formula_area_triangulo(double base, double altura){
	
	return (base * altura) / 2;
	
}

int formula_perimetro_rectangulo(int lado1, int lado2, int lado3, int lado4){
	
	return (lado1 + lado2 + lado3 + lado4);
	
}

double formula_perimetro_circulo(double radio){
	
	return (2 * PI * radio * radio);
	
}

int formula_perimetro_triangulo(int lado1, int lado2, int lado3){
	
	return (lado1 + lado2 + lado3);
	
}

// calculadoras geometricas disponibles

int calculo_area_rectangulo(){
	
	int base, altura, resultado;
	
	printf("\nIngrese base del rectangulo: ");
	scanf("%d", &base);
	printf("\nIngrese altura del rectangulo: ");
	scanf("%d", &altura);
	
	resultado = formula_area_rectangulo(base, altura);
	
	printf("\nEl area del rectangulo es %d\n", resultado);
	printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	
}

double calculo_area_circulo(){
	
	double resultado, radio;
	
	printf("\nIngrese radio del circulo: ");
	scanf("%lf", &radio);
	
	resultado = formula_area_circulo(radio);
	
	printf("\nEl area del circulo es %.3lf\n", resultado);
	printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	
}

double calculo_area_triangulo(){
	
	double base, altura, resultado;
	
	printf("\nIngrese base del triangulo: ");
	scanf("%lf", &base);
	printf("\nIngrese altura del triangulo: ");
	scanf("%lf", &altura);
	
	resultado = formula_area_triangulo(base, altura);
	
	printf("\nEl area del triangulo es: %.2lf\n", resultado);
	printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");

}

int calculo_perimetro_rectangulo(){
	
	int lado1, lado2, lado3, lado4, resultado;
	
	printf("\nIngrese la medida del primer lado: ");
	scanf("%d", &lado1);
	printf("Ingrese la medida del segundo lado: ");
	scanf("%d", &lado2);
	printf("Ingrese la medida del tercer lado: ");
	scanf("%d", &lado3);
	printf("Ingrese la medida del cuarto lado: ");
	scanf("%d", &lado4);
	
	resultado = formula_perimetro_rectangulo(lado1, lado2, lado3, lado4);
	
	printf("\nEl perimetro del rectangulo es %d\n", resultado);
	printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	
}

double calculo_perimetro_circulo(){
	
	double radio, resultado;
	
	printf("\nIngrese radio del circulo: ");
	scanf("%lf", &radio);
	
	resultado = formula_perimetro_circulo(radio);
	
	printf("\nEl perimetro del circulo es: %.2lf", resultado);
	printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	
}

int calculo_perimetro_triangulo(){
	
	int lado1, lado2, lado3, resultado;
	
	printf("\nIngrese la medida del primer lado: ");
	scanf("%d", &lado1);
	
	printf("Ingrese la medida del segundo lado: ");
	scanf("%d", &lado2);
	
	printf("Ingrese la medida del tercer lado: ");
	scanf("%d", &lado3);
	
	resultado = formula_perimetro_triangulo(lado1, lado2, lado3);
	
	printf("\nEl perimetro del triangulo es %d\n", resultado);
	printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	
}

// funciones de "UI" del programa

void cartel_inicio_programa(){
	
	printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf("               Calculadora de geometrica");
	printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	
}

void menu_principal(){
	
	    printf("\nElija una de las siguientes opciones:\n\n");
		printf("* Para calcular area de un rectangulo, ingrese 1.\n");
		printf("* Para calcular area de un circulo, ingrese 2.\n");
		printf("* Para calcular area de un triangulo, ingrese 3.\n");
		printf("* Para calcular perimetro de un rectangulo, ingrese 4.\n");
		printf("* Para calcular perimetro de un circulo, ingrese 5.\n");
		printf("* Para calcular perimetro de un triangulo, ingrese 6.\n");
		printf("* Para salir del programa, ingrese 0.\n\n");
		printf(" Su opcion es: ");
		
}

void cartel_fin_programa(){
	
	printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf("                 Programa Finalizado");
	printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	
}
