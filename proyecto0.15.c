//Leer los tres lados de un triángulo. Verificar que puedan formarlo y, en ese caso, clasificarlo por sus lados (equilátero, isósceles, escaleno) y por sus ángulos (acutángulo, rectángulo, obtusángulo).
#include<stdio.h>
int main(){
float lado1;
float lado2;
float lado3;
float equilatero;
float isoseles;
float escaleno;
float acutangulo;
float resctangulo;
float obtusangulo;

printf("Ingresa primer lado:");
scanf("%f", &lado1);
printf("Ingresa segundo lado:");
scanf("%f", &lado2);
printf("Ingresa tercer lado:");
scanf("%f", &lado3);

//triangulos
if(lado1 = lado2 = lado3){
    printf("es equilatero\n");
}
if(lado1 = lado2) {
    printf("es isosceles\n");
}
else{
    printf("es escaleno\n");
}

//clasificar
if((lado1 * lado1) + (lado2 * lado2)>(lado3 * lado3) ){
printf("es acutangulo\n");
}

if ((lado1 * lado1) + (lado2 * lado2) == (lado3 * lado3)) {
    printf("es rectangulo");
}
if((lado1 * lado1) + (lado2 * lado2)<(lado3 * lado3) ){
printf("es obtusangulo\n");
}














}
