#include <stdio.h>

int main() {
    // my array
    int faveNumbers[] = {7, 33, 13, 9, 29};

    //Fijate que el size de un array es la cant de bits total del arreglo / los bits de el elemento.
    
    size_t size = sizeof(faveNumbers) / sizeof(faveNumbers[0]);

    printf("The size is %d bytes \n", size);
}

// output

// The size is 20 bytes
