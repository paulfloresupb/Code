#include <stdio.h>
#include <stdlib.h>

int main(void){

    printf("Sistemas Operativos\n");

    //var es una dirección de memoria donde voy almacenar enteros
    int var =10;

    printf("var: %d\n", var);

    //quiero una variable que almacene la dirección de memoria de una
    //variable que almacena enteros.
    //PUNTERO: es una variable que almacena direcciones.
    int *pvar = &var;

    printf("&var: %lx\n", (long int) &var);
    printf("pvar: %p\n", pvar);

    return EXIT_SUCCESS;
}