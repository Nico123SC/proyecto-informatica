//Leer un número entero y decir si es positivo, negativo o cero, y además si es par o impar.
#include<stdio.h>
int main(){
int numero;

printf("ingresa un numero entero:");
scanf("%d",&numero);
//positivo, negativo o 0
if (numero > 0){
  printf("es positivo");
}
 if (numero < 0){

    printf("es negativo");
}
if (numero == 0){

    printf("es cero");
}

//par o impar
if (numero % 2 == 0){
  printf("es par");
}
 else{

    printf("es impar");
}

  
}
