#include "antenna.h"
#include <stdio.h>
#include <stdlib.h>

Antenna create_antenna_from_file(const char* filepath) {
    Antenna antenna;
    FILE* file = fopen(filepath, "r");
    if(!file) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }
    fscanf(file, "%lf %lf %lf", &antenna.length, &antenna.radius, &antenna.frequency);
    fclose(file);

    return antenna;
}