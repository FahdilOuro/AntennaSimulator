#ifndef MESH_H
#define MESH_H

#include "antenna.h"

typedef struct
{
    double* nodes;
    int** edges;
    int num_nodes;
    int num_elements;
} Mesh;

Mesh generate_mesh(Antenna antenna);
void free_mesh(Mesh mesh);


#endif