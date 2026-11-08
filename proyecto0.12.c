//Calcular el costo de un terreno cuyo precio es de $900 por m², con descuento del 10% si el área pasa de 500 m² y del 15% si pasa de 1000 m².

#include<stdio.h>

int main(){

float area;
float preciometro;
float descuento;
float preciosindescuento;

printf("Ingresa el area: ");
scanf("%f", &area);

//precio sin descuento
preciosindescuento = area * 900;

//descuentos

if(area > 1000){

    descuento = preciosindescuento * .15;
    printf("Precio con descuento del 15%: %.2f\n", preciosindescuento - descuento);
}

 if(area > 500){

    descuento = preciosindescuento * .10;
    printf("Precio con descuento del 10%: %.2f\n", preciosindescuento - descuento);
}

else{

    descuento = 0;
    printf("El terreno no tiene descuento.\n");
    printf("Precio final: %.2f\n", preciosindescuento);
}

}








