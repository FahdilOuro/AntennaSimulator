#include <stdio.h>
#include <stdlib.h>
#include "antenna.h"
#include "mesh.h"
#include "solver.h"
#include "utils.h"

int main() {
    // Initialisation
    Antenna dipole = create_antenna_from_file("data/antenna_config.txt");
    Mesh mesh = generate_mesh(dipole);

    // Resolution
    double* currents = solve_mom(mesh, dipole);

    // Resultats
    print_currents(currents, mesh.num_elements);

    // Nettoyage
    free_mesh(mesh);
    free(currents);

    return 0;
}