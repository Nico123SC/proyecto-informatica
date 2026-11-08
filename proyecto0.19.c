//Leer tres números. Si el primero es negativo, mostrar el producto de los tres; si es cero, mostrar la suma; si es positivo, mostrar el promedio.
#include<stdio.h>
int main(){

float num1;
float num2;
float num3;
float resultado;

printf("ingresar numero 1:");
scanf("%f", &num1);

printf("ingresar numero 2:");
scanf("%f", &num2);

printf("ingresar numero 3:");
scanf("%f", &num3);

//operaciones
if(num1 < 0){
    resultado = num1 * num2 * num3;
    printf("el producto es: %.2f", resultado);
}
if(num1 == 0){
    resultado = num1 + num2 + num3;
    printf("la suma es: %.2f", resultado);
}
if(num1 > 0){
    resultado = (num1 + num2 + num3) / 3;
    printf("el promedio es: %.2f", resultado);
}

}
