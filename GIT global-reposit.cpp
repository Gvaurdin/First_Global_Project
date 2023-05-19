#include <iostream>

using namespace std;

struct Vector {
    int* array;
    unsigned int size;
};

Vector init_vector(unsigned int size) {
    Vector mas;
    mas.array = new int[size];
    mas.size = size;

    for (int i = 0; i < size; ++i) {
        mas.array[i] = rand() % 56;
    }
    return mas;
}

void resizeUp_vector(Vector* mas, unsigned int size) {
    int *tmp = new int[mas->size];

    for (int i = 0; i < mas->size; ++i) {
        tmp[i] = mas->array[i];
    }

    delete[] mas->array;
    mas->array = new int[size];

    for (int i = 0; i < mas->size; ++i) {
        mas->array[i] = tmp[i];
    }
    mas->size++;
    delete[] tmp;
}
int main()
{
    Vector mas = init_vector(4);
}