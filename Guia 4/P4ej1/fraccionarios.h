/*Realizar un TDA para números fraccionarios, es decir aquellos que se expresan como el
cociente de dos números enteros. Las operaciones que deberá soportar el TDA son:
◦ crear(entero numerador, entero denominador) retorna fracción.
◦ numerador(fracción f) retorna entero.
◦ denominador(fracción f) retorna entero.
◦ sumar(fracción f1, fracción f2) retorna fracción.
◦ restar(fracción f1, fracción f2) retorna fracción.
◦ multiplicar(fracción f1, fracción f2) retorna fracción.
◦ dividir(fracción f1, fracción f2) retorna fracción.
◦ simplificar(fracción f) retorna fracción simplificada.
◦ iguales(fracción f1, fracción f2) retorna verdadero o falso.*/

typedef struct {
    int numerador, denominador;} fraccion;

    fraccion crear(int num, int denom);

    int numerador(fraccion );

    int denominador(fraccion );

    fraccion sumar(fraccion , fraccion );

    fraccion restar(fraccion ,fraccion );

    fraccion multiplicar(fraccion , fraccion);

    fraccion dividir(fraccion , fraccion );

    fraccion simplificar(fraccion );

    int iguales(fraccion , fraccion );
