#define VECTOR_INITIAL_CAPACITY 100

typedef int tipas;      // vektoriuje laikomu elementu tipas

typedef struct{
  int size;             // momentinis elementu kiekis
  int capacity;         // kiek rezervuota vietos is viso
  tipas *data;          // duomenu masyvas
} Vector;

void vector_init(Vector *vector);                           // Vektoriaus sukurimas

void vector_add(Vector *vector, tipas value);               // Elemento pridejimas prie galo

int vector_get(Vector *vector, int index, tipas *result);  // Suzinoti elementa tam tikroje pozicijoje

void vector_set(Vector *vector, int index, tipas value);    // Nustatyti elementa tam tikroje pozicijoje

void vector_resize(Vector *vector);                         // Jei uzpildome, is naujo iskiriame vieta

void vector_free(Vector *vector);                           // Sunaikinti vektoriu

int vector_size(Vector *vector);                            // Suzinoti vektoriaus elementu uzimama dydi

int vector_capacity(Vector *vector);                        // Suzinoti vektoriui isskirta dydi

void vector_remove(Vector *vector, int index);              // Pasalinti vektoriaus elementa

int vector_is_empty(Vector *vector);                        // Suzinoti ar vektorius tuscias

int vector_is_full(Vector *vector);                         // Suzinoti ar vektorius tuscias
