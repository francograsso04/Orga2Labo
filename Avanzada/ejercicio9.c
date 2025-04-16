#include <stdio.h>
#include <ctype.h>

void pasarAMayusculas(char *str) {
    while (*str != '\0') {         // Mientras no sea el fin del string
        if (islower(*str)) {       // Si es minúscula
            *str = toupper(*str);  // Convertirla
        }
        str++;  // Ir al siguiente carácter
    }
}

int main() {
    char str1[] = "buenas";
    char str2[] = "BuEnaS";

    pasarAMayusculas(str1);
    pasarAMayusculas(str2);

    printf("str1: %s\n", str1);  
    printf("str2: %s\n", str2);  

    return 0;
}
