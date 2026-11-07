// Leer el radio y la altura de un cilindro. Calcular y mostrar su área total, su volumen y su capacidad en litros (las medidas están en cm).
#include <stdio.h>

int main(){
    float radio;
    float altura;
    float areabase;
    float areatotal;
    float volumen;
    float litros;

    printf("Ingresar radio en centimetros: ");
 scanf("%f", &radio);

    printf("Ingresar altura en centimetros: ");
    scanf("%f", &altura);
//operaciones
areabase = 3.1416 * (radio * radio);
volumen = areabase * altura;
areatotal = 3.1416 *((radio + altura) * (2 * radio)) * 3.1416;

litros = volumen/1000;


//mostrar resultados
printf("el area total es:%f.2",areatotal);
printf("el volumen es:%f.2",volumen);
printf("su capacidad en litros es:%f.2",litros);
}
