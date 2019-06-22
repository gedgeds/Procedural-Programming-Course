#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void vector_init(Vector *vector){
    vector->size = 0;
    vector->capacity = VECTOR_INITIAL_CAPACITY;
    vector->data = malloc(sizeof(tipas) * vector->capacity);
}

void vector_add(Vector *vector, tipas value){
    if (vector->size >= vector->capacity){
        vector->capacity *= 2;
        vector_resize(vector);
    }
    vector->data[vector->size++] = value;
}

int vector_get(Vector *vector, int index, tipas *result){
    if (index >= vector->size || index < 0){
        return 0;
    }
    *result = vector->data[index];
    return 1;
}

void vector_set(Vector *vector, int index, tipas value){
    vector->data[index] = value;
}

int vector_size(Vector *vector){
    return vector->size;
}

int vector_capacity(Vector *vector){
    return vector->capacity;
}

int vector_is_empty(Vector *vector){
    return (vector->size == 0);
}

int vector_is_full(Vector *vector){
    void **temp;
    if (vector->size < vector->capacity)
        return 0;
    else {
        temp = realloc(vector->data, sizeof(tipas) * vector->capacity * 2);
        if (temp == NULL)
            return 1;
        else
            return 0;
    }
}

void vector_remove(Vector *vector, int index){
    if (index < 0 || index >= vector->size)
        return;
    int i;
    for (i = index; i < vector->size-1; i++){
        vector->data[i] = vector->data[i+1];
    }
    vector->data[vector->size-1] = NULL;
    vector->size--;
    if (vector->size > 0 && vector->size == vector->capacity / 4){
        vector->capacity/=2;
        vector_resize(&vector);
    }
}

void vector_resize(Vector *vector){
    vector->data = realloc(vector->data, sizeof(tipas) * vector->capacity);
}

void vector_free(Vector *vector){
    free(vector->data);
}
