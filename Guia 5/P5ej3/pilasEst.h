#define MAX 50 
typedef int TElementoP; 
typedef struct { 
 TElementoP datos[MAX]; 
 int tope; } TPila;

 void iniciaP (TPila * );

 void poneP (TPila * , TElementoP );

 void sacaP (TPila * , TElementoP * );

 TElementoP consultaP (TPila );

 int vaciaP (TPila );