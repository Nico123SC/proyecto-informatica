/* leer su temperatura en grados Celcius y mostrarla en fahrenheit y en kelvin.*/
#include <stdio.h>
main(){
//pedir datos
printf("ingresa temperatura en Celcius");
float celcius;
scanf("%f",&celcius);

//operaciones
float fahrenheit;
float kelvin;

fahrenheit = (celcius * 1.8) + 32;
kelvin = celcius + 273.15;

//mostrar datos
printf("\nla temperatura en fahrenheit es:%.2f",fahrenheit);

printf("\nla temperatura en kelvin es:%.2f",kelvin);







}
