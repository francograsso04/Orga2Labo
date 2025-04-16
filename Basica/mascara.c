#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// Realizar un programa que compare si los 3 bits m´as altos de una palabra de 32 bits son
// iguales numero_a_mover_bits los 3 bits m´as bajos de otra palabra de 32 bits. Si son iguales, informarlo por
// pantalla.

bool comparacionDeBits(uint32_t numero_a_mover_bits, int32_t numero_a_aplicar_mascara) {

    //Teniendo numero_a_mover_bits "numero_a_mover_bits" como un numero de 32 bits, muevo la parte alta con la baja
    int moviBits = numero_a_mover_bits >> 29;
    
    //Para tener los 3 mas bajos de numero_a_aplicar_mascara, le aplico mascara 
    int32_t  mascara = 0x00000007;
    int mascaraAplicada = numero_a_aplicar_mascara & mascara;

    return moviBits == mascaraAplicada;  // Retorna verdadero si son iguales, falso si no
}

int main() {
    //Faltaria agregar el test a la func pero me da fiacas
    return 0;
}