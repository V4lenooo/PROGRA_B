/* Rehacer el ejercicio 12 suponiendo que los números se encuentran en un archivo de texto,
todos en la misma línea. ¿Como modificaría la lectura, si hubiera un valor por línea?*/

#include <stdio.h>
int main() {
    FILE * arch;
    int num,sum = 0;
    
    arch = fopen ("numeros.txt","r");

    fscanf(arch,"%d", &num);
    while(!feof(arch)){
        while(num !=0) {
            sum += num;
            fscanf(arch,"%d", &num);
        }
        fscanf(arch,"%d", &num);
        
    }

    printf("la suma total es de: %d", sum);
    return 0;

} 