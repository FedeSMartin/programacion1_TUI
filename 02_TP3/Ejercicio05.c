#include <stdio.h>

// Ejercicio 5 - Trabajo Practico 2 - Martin Federico

int main() {
	
	// como son valores monetarios, son del tipo double, para la presicion decimal
	double precioProductoA, precioProductoB, precioTotalA, precioTotalB, totalAPagar, descuentoEnPesos, descuentoPagoEfectivo, recargoPagoTarjeta, descuentoEfectivo, recargoTarjeta;
	
	int cantidadA, cantidadB, metodoDePago;
	
	printf("Programa para venta de productos \"TODO LIMPIO\":\n\n");
	
	// se establecen los precios de los productos
	precioProductoA = 25.00;
	precioProductoB = 45.00;
	
	printf("El producto A, tiene un precio de $%.2f\n", precioProductoA);
	printf("El producto B, tiene un precio de $%.2f\n\n", precioProductoB);
	
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

	if(totalAPagar > 500) { // se realiza descuento por compra mayor a 500
		totalAPagar = totalAPagar - descuentoEnPesos;
		printf("\nPor su compra mayor a $500, obtuvo un descuento de $100.\n");
	}
	
	// se ingresa opcion de pago
	printf("\nPor favor ingrese forma de pago:\n");
	printf("Si paga con efectivo ingrese 0 (CERO), tiene 10%% de descuento.\n");
	printf("Si paga con tarjeta ingrese 1 (UNO), tiene 15%% de recargo.\n");
	
	scanf("%i", &metodoDePago);
	
	descuentoPagoEfectivo = 10;
	recargoPagoTarjeta = 15;
	
	if(metodoDePago == 0){ //  si se elije metodo en efectivo
		descuentoEfectivo = (100 - descuentoPagoEfectivo) / 100;
		totalAPagar = totalAPagar * descuentoEfectivo;
		
	}else if(metodoDePago == 1){ // si se elije metodo con tarjeta
		recargoTarjeta = totalAPagar * (recargoPagoTarjeta / 100);
		totalAPagar = totalAPagar + recargoTarjeta;
		
	}
	
	// se imprime el resultado final
	printf("\nTotal a pagar: $%.2f", totalAPagar);
	
	return 0;
}

