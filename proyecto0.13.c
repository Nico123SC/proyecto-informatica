//Leer tres calificaciones, calcular el promedio y clasificar al alumno: exento (promedio ≥ 9), ordinario (6 a 8.99) o extra (&lt; 6). Si tiene alguna calificación menor a 6, no puede estar exento aunque su promedio sea alto.

#include<stdio.h>
int main(){

float calificacion1;
float calificacion2;
float calificacion3;
float promedio;
printf("Ingresa primera calificacion: ");
scanf("%f", &calificacion1);
printf("Ingresa segunda calificacion: ");
scanf("%f", &calificacion2);
printf("Ingresa tercera calificacion: ");
scanf("%f", &calificacion3);

//sacar promedio
promedio = (calificacion1 + calificacion2 + calificacion3)/3;
//clasificar

if (promedio >=6 ){
    printf("ordinario");
}
if(promedio<6){
    printf("extra");
}
if(promedio>9){
    printf("excento");
}

}







