//Leer el nombre y el apellido de una persona, su año de nacimiento y el año actual Mostrar el nombre en formato “Apellido, Nombre” y su edad.
#include <stdio.h>
main(){
//pedir datos
char nombre[20];
char apellido[20];
int nacimiento;
int actual;
int edad;
printf("ingresa el ano de nacimiento:");
scanf("%d",&nacimiento);
printf("ingresa el ano actual:");
scanf("%d",&actual);
printf("ingresa el nombre:");
scanf("%s",&nombre);
printf("ingresa el apellido:");
scanf("%s",&apellido);






//operaciones
edad= actual - nacimiento;

//mostrar datos
printf("\nel apellido es: %s\n", apellido);
printf("\nel nombre es: %s\n", nombre);
printf("\nla edad es:%d\n", edad);
}
