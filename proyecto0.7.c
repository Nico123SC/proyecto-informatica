//Leer los dos catetos de un triángulo rectángulo. Calcular la hipotenusa, elperímetro y el área.
#include<stdio.h>
#include<math.h>
int main(){
float cateto1;
float cateto2;
float hipotenusa;
float perimetro;
float area;
printf("Ingresar primer cateto:");
 scanf("%f", &cateto1);

printf("Ingresar segundo cateto: ");
 scanf("%f", &cateto2);

 //operaciones
 hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
perimetro = cateto1 + cateto2 + hipotenusa;
area = (cateto1 * cateto2)/2;

//mostrar resultados
printf("la hipotenusa es:%f.2",hipotenusa);
printf("el perimetro es:%f.2",perimetro);
printf("su area es:%f.2",area);



}
