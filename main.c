#include <stdio.h>
#include <stdlib.h>

int main(void){

    printf("Sistemas Operativos\n");

    //var es una dirección de memoria donde voy almacenar enteros
    int var =10;

    printf("var: %d\n", var);

    //quiero una variable que almacene la dirección de memoria de una
    //variable que almacena enteros.
    //PUNTERO: es una variable que almacena las direcciones de la variable.
    int *pvar = &var; 
    printf("pvar: %p\n", pvar);

    //Leer la variable a la que apunto usando el puntero
    printf("Leer var usando el puntero: %d\n", *pvar); //*pvar equivalente a decir var

    //Escribir la variable a la que apunto usando el puntero

    //almacenar en var un 5
    *pvar = 5;
    printf("var: %d\n", var);

    return EXIT_SUCCESS;
}