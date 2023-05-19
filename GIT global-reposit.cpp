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

int main()
{
    Vector mas = init_vector(4);
}