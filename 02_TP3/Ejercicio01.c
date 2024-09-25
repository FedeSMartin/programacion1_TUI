#include <stdio.h>

// Ejercicio 1 - Trabajo Practico 2 - Martin Federico

int main() {
	
	// como son valores monetarios, son del tipo double, para la presicion decimal
	double precioProductoA, precioProductoB, precioTotalA, precioTotalB, totalAPagar, descuentoEnPesos;
	
	int cantidadA, cantidadB;
	
	printf("Programa para venta de productos \"TODO LIMPIO\":\n");
	
	// se establecen los precios de los productos
	precioProductoA = 25.00;
	precioProductoB = 45.00;
	printf("El producto A, tiene un precio de $%.2f\n", precioProductoA);
	printf("El producto B, tiene un precio de $%.2f\n", precioProductoB);
	
	// se especifican las cantidades de cada producto
	printf("Ingrese cantidad de producto A:\n");
	scanf("%d", &cantidadA);
	
	printf("Ingrese cantidad de producto B:\n");
	scanf("%d", &cantidadB);

	// se calcula es precio total de cada producto, segun su cantidad	
	precioTotalA = cantidadA * precioProductoA;
	precioTotalB = cantidadB * precioProductoB;	

	// se suman para un resultado final
	totalAPagar = precioTotalA + precioTotalB;
	
	descuentoEnPesos = 100.00;

	if(totalAPagar > 500) {
		totalAPagar = totalAPagar - descuentoEnPesos;
		printf("Por su compra mayor a $500, obtuvo un descuento de $100.\n");
	}
	
	printf("Total a pagar: $%.2f", totalAPagar);
		
	return 0;
}