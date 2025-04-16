#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define NAME_LEN 50
#define N INT32_MAX

typedef struct {
    char nombre[NAME_LEN+1];
    int vida;
    int ataque;
    int defensa;
} monstruo;

//ej 2
monstruo mejorar_monstruo (monstruo m1) {
    monstruo m2 = {"Lirili larila", m1.vida, m1.ataque + 10, m2.defensa + 10};
    return m2;
}


int main() {
    monstruo array[4]  = {
        {"Tralalero Tralala", 50, 100, 40},
        {"Bombardiro Crocodilo", 150, 120, 50},
        {"Brr Brr Patapim", 300, 50, 50},
        {"Tung Tung Tung Sahur", 70, 150, 70},
    };

    size_t size = sizeof(array) / sizeof(monstruo);

    for (int i = 0; i < size; i++) {
        printf("Nombre: %s y vida: %d\n", array[i].nombre, array[i].vida);
    }

    return 0;
}
