//Leer cuatro calificaciones parciales y calcular la calificación final ponderada (20%,20%, 25% y 35%).
#include<stdio.h>
int main(){
float calificacion1;
float calificacion2;
float calificacion3;
float calificacion4;
float primera;
float segunda;
float tercera;
float cuarta;
float calificacionfinal;

printf("Ingresar primera calificacion:");
 scanf("%f", &calificacion1);

 printf("Ingresar segunda calificacion:");
 scanf("%f", &calificacion2);

 printf("Ingresar tercera calificacion:");
 scanf("%f", &calificacion3);

 printf("Ingresar cuarta calificacion:");
 scanf("%f", &calificacion4);

//operaciones
primera = calificacion1 * .20;
segunda = calificacion2 * .20;
tercera = calificacion3 * .25;
cuarta = calificacion4 * .35;
calificacionfinal = primera + segunda + tercera + cuarta;

//mostrar resultados
printf("la calificacion final es:%f.2", calificacionfinal);

}
