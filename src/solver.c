#include "mesh.h"
#include <stdlib.h>
#include <math.h>

double* solve_mom(Mesh mesh, Antenna antenna) {
    int N = mesh.num_elements;
    double* currents = malloc(N * sizeof(double));

    // Exemple simplifié : matrice identité (fausse résolution MoM)
    for (int i = 0; i < N; i++)
    {
        currents[i] = sin(antenna.frequency * mesh.nodes[i]); // Signal fictif
    }
    
    return currents;
}