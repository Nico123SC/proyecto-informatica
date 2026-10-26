/*leer longitud en centimetros y mostrarla en pies y pulgadas*/
#include<stdio.h>
main(){
//pedir datos
printf("ingresar longitud en centimetros:");
float centimetros;
scanf("%f",&centimetros);

//operaciones
float pies;
float pulgadas;

pies = centimetros/30.48;
pulgadas = centimetros/2.54;

//mostrar datos
printf("\nla longitud en pies es:%.2f",pies);

printf("\nla longitud en pulgadas es:%.2f",pulgadas);





}
