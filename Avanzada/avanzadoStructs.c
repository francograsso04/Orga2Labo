#include <stdio.h>
#include <stdint.h>
#define NAME_LEN 50
//Estructuras (no son objetos).
//Agrupan datos en un solo tipo de datop, por ej:

struct Punto {
    float x;
    float y;
    float z;
};

struct player{
    int elo;
    char name[NAME_LEN + 1];
    int ranking;
};

struct player player2 = {2800,"franco grasso",1};


struct {
int elo;
char name[NAME_LEN + 1];
int ranking;
} player;

//La diferencia entre tener nombre de struct y dejar el nombre al final:
//1- La 2da estamos declarando que player es esa estructura
//2- en la 1era estamos creando un struct general en la que podemos inicializar otras variables.


//Definir nuevos tipos de dato.
typedef float real_t;
typedef int quantity_t;
typedef unsigned long int size_t; // en <stdint.h>
typedef uint32_t vaddr_t; // direccion virtual.
typedef uint32_t paddr_t; // direccion fisica

//Typedef con structs.

typedef struct {
int elo;
char name[NAME_LEN + 1];
int ranking;
} player_t;

//Estamos declarando que el tipo struct de esa esctructura es esa.

// player_t player1 = { 2800, "Magnus Carlsen", 1 },
// player_t player2 = { 2700, "Fabiano Caruana", 2 };
// player_t player3 = { .name = "Hikaru Nakamura",
// .ranking = 3,
// .elo = 2600}; //forma alternativa



int main(){
    struct Punto p1;
    p1.x = 1.0;
    p1.y = 2.0;
    p1.z = 3.0;
    
    printf("Punto (%f, %f %f)\n", p1.x, p1.y,p1.z);
    return 0;
}

