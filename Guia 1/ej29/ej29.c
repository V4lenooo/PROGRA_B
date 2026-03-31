#include <stdio.h>
#include <stdlib.h>


void carga();
void leer();

int main(){
    
    carga();
    leer();
    return 0;

}

void carga(){
    float temperatura;
    char ingresa_datos;
    
    FILE * arch;
    arch = fopen("DATOS.dat", "wb");   

    printf("desea ingresar una medicion? (S/N)\n");
    scanf("%c", &ingresa_datos);

    while (ingresa_datos == 's' || ingresa_datos == 'S'){
        printf("Temperatura obtenida: \n");
        scanf("%f", &temperatura);

        fwrite(&temperatura, sizeof(float),1, arch);

        printf("Continuar ingresando? (S/N)\n");
        scanf(" %c", &ingresa_datos);
    
    }
    fclose(arch);
}

void leer(){
    float temperatura, min = 999999,max = -999999,sum = 0;
    int cont = 0;
    FILE * arch;

    arch = fopen("DATOS.dat", "rb");
    if (arch == NULL)
        printf("No se encuentra el archivo");
    else
        while (fread(&temperatura, sizeof(float), 1, arch) == 1){
            cont++;
            sum += temperatura;

            if (temperatura>max)
                max = temperatura;
            else
                if (temperatura < min)
                    min = temperatura;
        }
    printf("La temperatura promedio es %5.2fC la maxima %5.2fC y la minima %5.2fC\n", cont ? sum/cont : 0, max, min);
    fclose(arch);   
}