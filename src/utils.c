#include "utils.h"
#include <stdio.h>

void print_currents(const double* currents, int size) {
    printf("Currents distribution :\n");
    for (int i = 0; i < size; i++)
    {
        printf("I[%d] = %lf\n", i, currents[i]);
    }
}