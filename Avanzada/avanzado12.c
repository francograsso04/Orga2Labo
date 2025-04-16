#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 50

typedef struct {
    char nombre[NAME_LEN + 1];
    int edad;
} persona_t;

persona_t* crearPersona(const char *nombre, int edad) {
    persona_t *p = malloc(sizeof(persona_t));
    if (p == NULL) {
        return NULL; // por si falla malloc
    }

    // Copiar el nombre al campo de la estructura
        strncpy(p->nombre, nombre, NAME_LEN);
        p->nombre[NAME_LEN] = '\0';  // asegurar null-terminación

        p->edad = edad; //Simplemente guarda el número edad dentro del campo edad de la estructura persona_t.

    return p;
}

int main() {
    persona_t *persona = crearPersona("Franco", 23);

    if (persona != NULL) {
        printf("Nombre: %s\n", persona->nombre);
        printf("Edad: %d\n", persona->edad);

        free(persona);  // liberar memoria
    }

    return 0;
}
