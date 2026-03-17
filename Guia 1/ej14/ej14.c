#include <stdio.h>

void supEinf(int L) {
    int i;
    for (i = 1; i <= L; i++) {
        printf("#");
    }
}

void medio(int L) {
    int i, j;
    for (j = 1; j <= L - 2; j++) {
        printf("#");
        for (i = 1; i <= L - 2; i++) {
            printf(" ");
        }
        printf("#");
        printf("\n");
    }
}

int main() {
    int l;
    printf("Ingrese el lado del cuadrado \n");
    scanf("%d", &l);
    supEinf(l);
    printf("\n");
    medio(l);
    supEinf(l);
    return 0;
}

