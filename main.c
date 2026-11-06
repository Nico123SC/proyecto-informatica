//Dado el costo de una compra y el dinero entregado por el cliente, calcular elcambio y desglosarlo en billetes y monedas (500, 200, 100, 50, 20, 10, 5, 2 y 1).
#include <stdio.h>

int main(){
	// Variables para el dinero
	float costo;
	float dinero;
	float cambio;

	// Variables para billetes y monedas
	int billete500;
	int billete200;
	int billete100;
	int billete50;
	int billete20;
	int moneda10;
	int moneda5;
	int moneda2;
	int moneda1;

	printf("CALCULAR CAMBIO\n");

	printf("Ingresa el costo: ");
	scanf("%f", &costo);

	// cuanto entrego
	printf("Ingresa el dinero que dio: ");
	scanf("%f", &dinero);

	// Calcular el cambio
	cambio = dinero - costo;

	printf("\nEl cambio es:%.2f", cambio);

	//billetes de 500
	billete500 = cambio / 500;
	cambio = cambio - (billete500 * 500);

	// billetes de 200
	billete200 = cambio / 200;
	cambio = cambio - (billete200 * 200);

	//billetes de 100
	billete100 = cambio / 100;
	cambio = cambio - (billete100 * 100);

	//billetes de 50
	billete50 = cambio / 50;
	cambio = cambio - (billete50 * 50);

	//billetes de 20
	billete20 = cambio / 20;
	cambio = cambio - (billete20 * 20);

	//monedas de 10
	moneda10 = cambio / 10;
	cambio = cambio - (moneda10 * 10);

	//monedas de 5
	moneda5 = cambio / 5;
	cambio = cambio - (moneda5 * 5);

	//monedas de 2
	moneda2 = cambio / 2;
	cambio = cambio - (moneda2 * 2);
	//monedas de 1
	moneda1 = cambio / 1;
	cambio = cambio - (moneda1 * 1);



	// Mostrar resultados
	printf("CAMBIO\n");

	printf("Billetes de 500: %d\n", billete500);
	printf("Billetes de 200: %d\n", billete200);
	printf("Billetes de 100: %d\n", billete100);
	printf("Billetes de 50: %d\n", billete50);
	printf("Billetes de 20: %d\n", billete20);
	printf("Monedas de 10: %d\n", moneda10);
	printf("Monedas de 5: %d\n", moneda5);
	printf("Monedas de 2: %d\n", moneda2);
	printf("Monedas de 1: %d\n", moneda1);




}