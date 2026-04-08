/*Desarrollar funciones (algunas pueden ser void) para:
a) calcular el producto de dos números enteros positivos a partir de sumas sucesivas.
b) calcular cociente y resto entre dos números enteros positivos a partir de restas sucesivas
c) hallar el máximo elemento de un vector de enteros (realizar una versión void y otra int)*/

#include <stdio.h>

#define max 30

/* a) */
int producto(int, int);
/* b) */
void division(int, int, int);
/* c) */
void arma_vec(int[max], int *);
int maximo_int(int[max], int);
void maximo_void(int[max], int, int);

int main() {
    int a, b, vec_int[max], N;
    char c;

    printf("Ingresar:\n a) producto\n b) cociente y resto\n c) maximo\n");
    scanf(" %c", &c);

    switch (c) {
    case 'a':
        printf("ingrese a x b\n");
        scanf("%d %d", &a, &b);
        printf("resultado: %d", producto(a, b));
        break;

    case 'b':
        printf("ingrese a / b\n");
        scanf("%d %d", &a, &b);
        printf("resultado:\n");
        division(a, b, 0);
        break;

    case 'c':
        printf("Construya su vector, -1 para finalizar\n");
        arma_vec(vec_int, &N);
        printf("el maximo es %d\n", maximo_int(vec_int, N));
        maximo_void(vec_int, N, -1);
        break;

    default:
        printf("error");
    }

    return 0;
}

int producto(int a, int b) {
    int suma_total = 0;

    if (b <= 0)
        return suma_total;
    else
        suma_total = a + producto(a, b - 1);

    return suma_total;
}

void division(int a, int b, int cociente) {
    if (b > a) {
        printf("cociente: %d\n", cociente);
        printf("resto: %d\n", a);
    } 
    else {
        cociente++;
        a -= b;
        division(a, b, cociente);
    }
}

void arma_vec(int vec_int[max], int *N) {
    int i = 0, num = 0;

    while (i < max && num != -1) {
        printf("numero %d: \n", i + 1);
        scanf("%d", &num);
        if (num != -1) {
            vec_int[i] = num;
            i++;
        }
    }

    *N = i;
}

int maximo_int(int vec_int[max], int N) {
    int maximo;

    if (N == 0)
        return vec_int[0];
    else {
        maximo = maximo_int(vec_int, N - 1);
        if (vec_int[N] > maximo)
            return vec_int[N];
        else
            return maximo;
    }
}

void maximo_void(int vec_int[max], int N, int maximo) {
    if (N == 0)
        printf("el maximo es %d (func. void)\n", maximo);
    else {
        if (vec_int[N] > maximo)
            maximo = vec_int[N];
        maximo_void(vec_int, N - 1, maximo);
    }
}