//Calcular el costo total de un terreno rectangular a partir de su largo, su ancho y elprecio por m². Mostrar el subtotal, el IVA (16%) y el total.
#include<stdio.h>
int main(){
float largo;
float ancho;
float precioxmetro;
float metrosterreno;
float costototal;
float subtotal;
float iva;
printf("ingresa el largo:");
scanf("%f", &largo);

printf("ingresa el ancho:");
scanf("%f", &ancho);

printf("ingresa el precio por cada metro cuadrado:");
scanf("%f",&precioxmetro);

//operaciones
metrosterreno = largo * ancho;
subtotal = metrosterreno * precioxmetro;
iva = subtotal * .16;
costototal = subtotal * 1.16;

//mostrar resultados
printf("el subtotal es:%f.2",subtotal);
printf("el iva es:%f.2",iva);
printf("el total es:%f.2",costototal);





}
