//Leer un mes (1 a 12) y un año. Mostrar el nombre del mes y cuántos días tiene, considerando años bisiestos para febrero. Si el mes no es válido, mostrar “Error de opción”.
#include<stdio.h>
int main(){
int mes;
int ano;
printf("Escribe un numero de mes:");
scanf("%d", &mes);
printf("Escribe un ano:");
scanf("%d", &ano);
switch(mes){
case 1:
     printf("enero tiene 31 dias");
     break;

case 2:
     printf("febrero");

     if(ano % 4 == 0){
        printf("tiene 29 dias");
     }

     else{
        printf("tiene 28 dias");
     }

     break;

case 3:
     printf("marzo tiene 31 dias");
     break;
case 4:
     printf("abril tiene 30 dias ");
     break;
case 5:
     printf("mayo tiene 31 dias");
     break;
case 6:
     printf("junio tiene 30 dias");
     break;
case 7:
     printf("julio tiene 31 dias");
     break;
case 8:
     printf("agosto tiene 31 dias");
     break;
case 9:
     printf("septiembre tiene 30 dias");
     break;
case 10:
     printf("octubre tiene 31 dias");
     break;
case 11:
     printf("noviembre tiene 30 dias");
     break;
case 12:
     printf("diciembre tiene 31 dias");
     break;


default:
    printf("opcion no valida");
    break;

}
}
