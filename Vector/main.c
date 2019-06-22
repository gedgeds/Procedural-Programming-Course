#include <stdio.h>
#include "vector.h"

int main() {

    Vector vector;
    vector_init(&vector);

    int i;
    for (i = 200; i > -50; i--) {
        vector_add(&vector, i);
    }

    vector_set(&vector, 399, 21312984);

    if(vector_is_empty(&vector))
        printf("Vector is empty");

    if(vector_is_full(&vector))
        printf("Vector is full");


    vector_remove(&vector, 20);

    printf("Size of vector: %d\n", vector_size(&vector));

    printf("Capacity of vector: %d\n", vector_capacity(&vector));

    vector_free(&vector);

    return 0;
}
