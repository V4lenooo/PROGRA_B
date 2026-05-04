#include "fraccionarios.h"
#include <stdio.h>

fraccion crear(int numerador, int denominador){
    fraccion f;

    if (denominador != 0){
        f.numerador = numerador;
        f.denominador = denominador;
    }

    return f;

}

int numerador (fraccion f){
    return f.numerador;
}

int denominador (fraccion f){
    return f.denominador;
}

fraccion sumar (fraccion f1, fraccion f2){
    fraccion f;

    if (f1.denominador == f2.denominador){
        f.numerador = f1.numerador + f2.numerador;
        f.denominador = f1.denominador;
    }
    else{
        f.numerador = f1.numerador*f2.denominador + f2.numerador*f1.denominador;
        f.denominador = f1.denominador*f2.denominador;
    }

    return f;

}

fraccion restar (fraccion f1, fraccion f2){
    fraccion f;

    if (f1.denominador == f2.denominador){
        f.numerador = f1.numerador - f2.numerador;
        f.denominador = f1.denominador;
    }
    else{
        f.numerador = f1.numerador*f2.denominador - f2.numerador*f1.denominador;
        f.denominador = f1.denominador*f2.denominador;
    }

    if (f.numerador != 0)
        return f;
    else {
        f.denominador = 0;
        return f;
    }

}

fraccion multiplicar (fraccion f1, fraccion f2){
    fraccion f;

    f.numerador = f1.numerador*f2.numerador;
    f.denominador = f1.denominador*f2.denominador;
    return f;
}

fraccion dividir (fraccion f1, fraccion f2){
    fraccion f;

    f.numerador = f1.numerador*f2.denominador;
    f.denominador = f1.denominador*f2.numerador;
    
    // Normalizar: el signo debe estar en el numerador
    if (f.denominador < 0) {
        f.numerador = -f.numerador;
        f.denominador = -f.denominador;
    }
    
    return f;

}

fraccion simplificar (fraccion f){
    fraccion f_simplificada;
    int mcd = 1, i;
    int num_abs = (f.numerador < 0) ? -f.numerador : f.numerador;
    int den_abs = (f.denominador < 0) ? -f.denominador : f.denominador;

    for (i = 1; i <= num_abs && i <= den_abs; i++){
        if (num_abs % i == 0 && den_abs % i == 0)
            mcd = i;
    }

    f_simplificada.numerador = f.numerador / mcd;
    f_simplificada.denominador = f.denominador / mcd;

    return f_simplificada;
}

int iguales (fraccion f1, fraccion f2){
    
    return f1.numerador == f2.numerador && f1.denominador == f2.denominador;
}