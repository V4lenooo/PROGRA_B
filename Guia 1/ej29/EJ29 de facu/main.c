#include <stdio.h>
#include <stdlib.h>

void carga();
void leer();

int main()
{
    carga();
    leer();
    return 0;
}
void carga(){
    float med;
    char ingreseTem;
    FILE * arch;

    arch = fopen("EJ29.dat","wb");

    printf("Quiere ingresar temperaturas ? s/n \n");
    scanf("%c",&ingreseTem);

    while(ingreseTem=='s'){
        printf("Ingrese un numero \n");
        scanf("%f",&med);
        getchar();
        fwrite(&med,sizeof(float),1,arch);
        printf("Quiere seguir ingresenado temperaturas ? s/n \n");
        scanf("%c",&ingreseTem);
    }
    fclose(arch);
}
void leer(){
    float med,max=-99999,min=99999,sum=0;
    int cant=0;
    FILE * arch;
    arch = fopen("EJ29.dat","rb");
    if(arch==NULL)
        printf("No abrio\n");
    else
        while(fread(&med,sizeof(int),1,arch)==1){
            cant++;
            sum+=med;
            if(med>=max)
                max=med;
            else 
                if(med<=min)
                    min=med;
        }
    printf("La temperatura promedio es %.3f \nLa temperatura maxima es %.2f y la temperatura minima es %.2f \n",cant ? sum/cant : 0, max, min);
    fclose(arch);
}
