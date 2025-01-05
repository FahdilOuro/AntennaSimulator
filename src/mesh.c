#include "mesh.h"
#include <stdlib.h>
#include <math.h>

Mesh generate_mesh(Antenna antenna) {
    int num_segments = 10;     // Exemple : 10 segments
    Mesh mesh;
    mesh.num_node = num_segments + 1;
    mesh.num_elements = num_segments;

    mesh.nodes = malloc(mesh.num_node * sizeof(double));
    mesh.edges = malloc(mesh.num_elements * sizeof(int*));
    for (int i = 0; i < mesh.num_elements; i++) {
         mesh.edges[i] = malloc(2 * sizeof(int));
    }

    double segment_length = antenna.length / num_segments;
    for (int i = 0; i < mesh.nodes; i++)
    {
        mesh.nodes[i] = -antenna.lenght / 2 + i * segment_length;
    }
    
    for (int i = 0; i < mesh.num_elements; i++)
    {
        mesh.edges[i][0] = i;
        mesh.edges[i][1] = i + 1;
    }
    
    return mesh;
}

void free_mesh(Mesh mesh) {
    free(mesh.nodes);
    for (int i = 0; i < mesh.num_elements; i++)
    {
        free(mesh.edges[i]);
    }
    free(mesh.edges);
}