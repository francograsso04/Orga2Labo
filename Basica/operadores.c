#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 2, d = 1;
    //a = 0101
    //b = 0011
    //c = 0010
    //d = 0001

    // Operaciones aritméticas
    printf("a + b * c / d = %d\n", a + b * c / d);
    printf("a %% b = %d\n", a % b);

    // Operaciones de comparación
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    // Operaciones bit a bit
    printf("a & b = %x\n", a & b);
    printf("a | b = %x\n", a | b);
    printf("~a = %x\n", ~a);

    // Operadores lógicos
    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);

    // Desplazamiento de bits
    //Los desaplazamientos de bits se arman a >> b o a << b.
    //Onda, a "a" le corres b bits a la derecha o izq. Es obvio que si a es de 32 bits, b tiene que estar entre 0 y 31.
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1); 

    // Operadores de asignación
    a += b;
    printf("a += b -> %d\n", a);
    a -= b;
    printf("a -= b -> %d\n", a);
    a *= b;
    printf("a *= b -> %d\n", a);
    a /= b;
    printf("a /= b -> %d\n", a);
    a %= b;
    printf("a %%= b -> %d\n", a);

    return 0;
}
