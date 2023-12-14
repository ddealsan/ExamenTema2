#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MATERIAS 10
#define MAX_NOMBRE 50

struct Estudiante {
    char nombre[MAX_NOMBRE];
    int edad;
    float promedio;
    char materias[MAX_MATERIAS][MAX_NOMBRE];
    int numMaterias;
};