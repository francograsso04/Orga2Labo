#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct node {
    void* data;
    struct node* next;
    struct node* previous;
} node_t;

typedef struct list {
    uint8_t size;
    node_t* first;
    node_t* last;
} list_t;



list_t* listNew(){
    list_t* l = malloc(sizeof(list_t));
    l->size = 0;
    l->first = NULL;
    l->last = NULL;
    return l;
}

void listAddFirst(list_t* l, void* data){
    node_t* n = malloc(sizeof(node_t));
    n->data = data;
    n->next = l->first;
    n->previous = NULL;

    if (l->first != NULL) {
        l->first->previous = n;
    } else {
        l->last = n; // Si la lista estaba vacía, este es también el último nodo
    }

    l->first = n;
    l->size++;
}
    
void* listGet(list_t* l, uint8_t i){
    node_t* n = l->first;
    for(uint8_t j = 0; j < i; j++)
        n = n->next;
return n->data;
}

void* listGetLast(list_t* l){
    return l->last->data;
}
void* removeLast(list_t* l) {
    if (l->last == NULL) return NULL;

    node_t* n = l->last;
    void* data = n->data;

    if (n->previous) {
        l->last = n->previous;
        l->last->next = NULL;
    } else {
        // Solo había un elemento
        l->first = NULL;
        l->last = NULL;
    }

    free(n);
    l->size--;
    return data;
}

// Se asume: i < l->size
void* listRemove(list_t* l, uint8_t i) {
    if (i >= l->size) return NULL;

    node_t* tmp;
    void* data;

    if (i == 0) {
        tmp = l->first;
        data = tmp->data;
        l->first = tmp->next;
        if (l->first)
            l->first->previous = NULL;
        else
            l->last = NULL;
    } else {
        node_t* n = l->first;
        for (uint8_t j = 0; j < i - 1; j++)
            n = n->next;

        tmp = n->next;
        data = tmp->data;
        n->next = tmp->next;

        if (tmp->next)
            tmp->next->previous = n;
        else
            l->last = n;
    }

    free(tmp);
    l->size--;
    return data;
}


void listDelete(list_t* l) {
    node_t* n = l->first;
    while (n) {
        node_t* tmp = n;
        n = n->next;
        free(tmp);
    }
    free(l);
}