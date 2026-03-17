#include <stdio.h>
int main() {
    int a,b,c,C,d;
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf(" %d", &b);
    printf("Ingrese el valor de c: ");
    scanf(" %d", &c);
    //compara los valores devuelve el menor (C)
    C = (a<b) ? a : b;
    d = (a < b && b < c)? printf("ordenados") : printf("desordenados");
    printf("\n El menor es: %d", C);
    return 0;
}