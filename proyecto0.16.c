//Leer tres números y mostrarlos de menor a mayor.
#include<stdio.h>
int main(){
float numero1;
float numero2;
float numero3;
float menor;
float mayor;
printf("Ingresa primer numero: ");
scanf("%f", &numero1);
printf("Ingresa segundo numero: ");
scanf("%f", &numero2);
printf("Ingresa tercer numero: ");
scanf("%f", &numero3);

//ordenar menor a mayor
mayor = numero1;

if(numero2 > mayor){
    numero2;

}
if(numero3 > mayor){
    mayor = numero3;
}

menor = numero1;

if(numero2 < menor){
    menor = numero2;
}
if(numero3 < menor){
    menor = numero3;
}



//mostrar datos

printf("el mayor es: %f.2",mayor);
printf("el menor es: %f.2",menor);








}
