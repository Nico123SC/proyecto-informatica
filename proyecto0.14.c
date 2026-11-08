//Leer cinco calificaciones. Mostrar el promedio, la calificación más alta y la más baja, e indicar si el alumno está aprobado o reprobado (mínimo 6).
#include<stdio.h>
int main(){
float cal1;
float cal2;
float cal3;
float cal4;
float cal5;
float promedio;
float mayor;
float menor;

printf("Ingresa primera calificacion: ");
scanf("%f", &cal1);
printf("Ingresa segunda calificacion: ");
scanf("%f", &cal2);
printf("Ingresa tercera calificacion: ");
scanf("%f", &cal3);
printf("Ingresa cuarta calificacion: ");
scanf("%f", &cal4);
printf("Ingresa quinta calificacion: ");
scanf("%f", &cal5);
//sacar promedio
promedio = (cal1 + cal2 + cal3 + cal4 + cal5)/5;

// Calificacion mas alta
mayor = cal1;

if(cal2 > mayor){
    mayor = cal2;
}
if(cal3 > mayor){
    mayor = cal3;
}
if(cal4 > mayor){
    mayor = cal4;
}
if(cal5 > mayor){
    mayor = cal5;
}
// Calificacion mas baja
menor = cal1;

if(cal2 < menor){
    menor = cal2;
}
if(cal3 < menor){
    menor = cal3;
}
if(cal4 < menor){
    menor = cal4;
}
if(cal5 < menor){
    menor = cal5;
}
//aprobado o reprobado
if (promedio<=6){
    printf("aprobado");
}
if (promedio>6){
    printf("reprobado");
}

//mostrar datos

printf("el promedio es: %f.2",promedio);
printf("la menor calificacion es: %f.2",menor);
printf("la mayor calificacion es: %f.2",mayor);
printf(": %f.2",promedio);



}
