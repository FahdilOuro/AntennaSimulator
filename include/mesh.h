#include "antenna.h"
#ifndef MESH_H
#define MESH_H

typedef struct
{
    double* nodes;
    int** edges;
    int num_node;
    int num_elements;
} Mesh;

Mesh generate_mesh(Antenna antenna);
void free_mesh(Mesh mesh);


#endif