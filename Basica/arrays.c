#include <stdio.h>
#define N 4

//ejercicio 11


int main() {

    //Los arrays se guardan en el stack, cada elmento ocupa dependiendo su tipo, 4 bytes de memoria.

    int a[N]; //defino a con capacidad 4
    a[0] = 0;
    a[1] = 20;
    a[2] = 14;
    a[3] = 40;
    //o int a[N] = {0, 20, 14, 40}

    char s[] = "Hola!"; // string literal
    char u[] = {'H', 'o', 'l', 'a', '!', '\0'}; // char literals
    //En este caso, cada word es de 1 byte entonces Hola entran en 4 bytes de memoria.

     //Ejercicio 11 Ejercicio 11:
    // Realizar un programa que rote un arreglo de n´umeros enteros a la izquierda. Por ejemplo,
    // si el arreglo es [1, 2, 3, 4], el resultado debe ser [2, 3, 4, 1].

    int array[] = {1,2,3,4};
    int first = array[0];
    size_t size = sizeof(array) / sizeof(int);

    for (int i = 0; i < size; i++){
        array[i] = array[i+1];
    }

    array[size-1] = first;

    


    return 0;
}

//Los arrays se guardan en el stack, cada elmento ocupa dependiendo su tipo, 4 bytes de memoria.

