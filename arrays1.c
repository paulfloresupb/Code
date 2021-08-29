#include <stdio.h>
#include <stdlib.h>

void printArr(int *, int);

int main(){
//################################################################
    //int arr[4] = {1,2,3,4};
    //printf("sizeof(arr): %ld\n", sizeof(arr)/sizeof(int));
//################################################################

//################################################################
int arr[] = {1,2,3,4};
//int arr2[] = {5,6,7,8};
//int arr3[] = {9,10,11,12};
//int arr4[] = {13,14,15,16};

    for(int i = 0; i < sizeof(arr)/sizeof(int);i++ ){
    printf("arr[%d]: %d\n",i,arr[i]);
    }
    //--for(int i = 0; i < sizeof(arr2)/sizeof(int);i++ ){
    //--printf("arr2[%d]: %d\n",i,arr2[i]); }
    // arr: El nombre del arreglo es la dirección del primer 
    //elemento del arreglo
    // - ¿Cual es el tipo del primer elemento del arreglo? int
    // --> arr es de tipo int *

    //int *parr = arr; //dirección del primer arreglo

    //int * pparr =&arr: //dirección del arreglo(todo el arreglo)

    //--int (*pparr) [sizeof(arr)/sizeof(int)] = &arr; //&arr es la dirección de un arreglo de 4 enteros

    printArr(arr, sizeof(arr)/sizeof(int));
    //--printf("pparr %p\n", pparr);

    //--for(int i = 0; i < sizeof(arr)/sizeof(int);i++ ){
    //--printf("(pparr) arr[%d]: %d\n",i, *(*(pparr + i)));}

//################################################################
    //printf(int i = 0; i < sizeof(arr))
    //sizeof(arr) me permite saber cuantos bites ocupa el elemento arr en memoria
    //sizeof(int) cuantos bites ocupa un entero
    //ld te permite ver números más grandes
    return EXIT_SUCCESS;
}

void printArr(int *var, int size){
    for(int i = 0; i < size;i++ ){
        //printf("By printArr arr [%d]: %d\n",i , *(var + i) );
        printf("By printArr arr [%d]: %d\n",i , var [i]);
    }
}