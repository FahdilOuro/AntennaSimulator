#ifndef ANTENNA_H
#define ANTENNA_H

typedef struct
{
    double length;
    double radius;
    double frequency;
} Antenna;

Antenna create_antenna_from_file(const char* filepath);

#endif