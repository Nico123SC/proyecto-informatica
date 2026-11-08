//Leer un número del 1 al 7 y mostrar el día de la semana correspondiente, indicando si es día laboral o fin de semana. Si el número no es válido, mostrar “Error de opción”.
#include<stdio.h>
int main(){
printf("Escribe el numero de la semana:");
int dia;
scanf("%d", &dia);
switch(dia){
case 1:
     printf("laboral");
     break;
case 2:
     printf("laboral");
     break;
case 3:
     printf("laboral");
     break;
case 4:
     printf("laboral");
     break;
case 5:
     printf("laboral");
     break;
case 6:
     printf("fin de semana");
     break;
case 7:
     printf("fin de semana");
     break;

default:
    printf("opcion no valida");
    break;

}
}
