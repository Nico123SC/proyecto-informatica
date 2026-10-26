/*Leer tres numeros enteros
 y mostrar su suma, su producto
 y su promedio con dos decimales.
*/
#include <stdio.h>
main(){
//pedir datos
printf("ingresa el primer numero:");
float numeroUno;
scanf("%f",&numeroUno);

printf("ingresa el segundo numero:");
float numeroDos;
scanf("%f",&numeroDos);

printf("ingresa el tercer numero:");
float numeroTres;
scanf("%f",&numeroTres);

//Operaciones
float suma;
float producto;
float promedio;

suma = numeroUno + numeroDos + numeroTres;
producto = numeroUno * numeroDos * numeroTres;
promedio = (numeroUno+numeroDos+numeroTres)/3;

//mostrar datos
printf("\nla suma de los numeros es: %.2f",suma);
printf("\nel producto de los numeros es: %.2f",producto);
printf("\nel promedio de los numeros es: %.2f", promedio);




}
