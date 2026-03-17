/*Desarrollar un programa que muestre la suma de un conjunto de números naturales ingresados
por teclado. La serie finaliza al ingresar el número 0*/
#include <stdio.h>
int main() {
  int num,sum = 0;
  printf("ingrese un numero positivo, 0 para terminar \n");
  scanf("%d", &num);
  
  while(num !=0) {
    sum += num;
    scanf("%d", &num);
    }

printf("la suma total es de: %d", sum);
return 0;
} 