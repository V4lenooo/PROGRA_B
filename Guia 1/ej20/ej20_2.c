#include <stdio.h>
#define max 30

void conversion(int binario[], int num, int *pL);
void muestra(int binario[], int L);

int main() {
    int num, binario[max], L;

    printf("Ingrese el numero a convertir: ");
    if (scanf("%d", &num) != 1) {
        printf("Entrada invalida\n");
        return 1;
    }

    if (num < 0) {
        printf("Solo se permiten numeros no negativos\n");
        return 1;
    }

    conversion(binario, num, &L);
    muestra(binario, L);
    printf("\n");

    return 0;
}

void conversion(int binario[], int num, int *pL) {
    int i = 0;

    if (num == 0) {
        binario[i++] = 0;
    } else {
        while (num > 0 && i < max) {
            binario[i++] = num % 2;
            num /= 2;
        }
    }

    *pL = i;
}

void muestra(int binario[], int L) {
    int i;

    for (i = L - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }
}
