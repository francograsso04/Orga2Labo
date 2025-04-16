#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct node {
    void* data;
    struct node* next;
} node_t;

typedef struct list {
    uint8_t size;
    node_t* first;
} list_t;

list_t* listNew() {
    list_t* l = malloc(sizeof(list_t));
    l->size = 0;
    l->first = NULL;
    return l;
}

void listAddFirst(list_t* l, void* data) {
    node_t* n = malloc(sizeof(node_t));
    n->data = data;
    n->next = l->first;
    l->first = n;
    l->size++;
}

// Se asume: i < l->size
void* listGet(list_t* l, uint8_t i) {
    node_t* n = l->first;
    for (uint8_t j = 0; j < i; j++)
        n = n->next;
    return n->data;
}

// Se asume: i < l->size
void* listRemove(list_t* l, uint8_t i) {
    node_t* tmp = NULL;
    void* data = NULL;

    if (i == 0) {
        tmp = l->first;
        data = tmp->data;
        l->first = tmp->next;
    } else {
        node_t* n = l->first;
        for (uint8_t j = 0; j < i - 1; j++)
            n = n->next;
        tmp = n->next;
        data = tmp->data;
        n->next = tmp->next;
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
