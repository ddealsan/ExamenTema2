#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ASISTENCIAS 10
#define MAX_NOMBRE 50

struct Asistencia {
    char fecha[MAX_NOMBRE];
    char materia[MAX_NOMBRE];
    char estado[MAX_NOMBRE];
};

struct Estudiante {
    char nombre[MAX_NOMBRE];
    int edad;
    float promedio;
    struct Asistencia asistencias[MAX_ASISTENCIAS];
    int numAsistencias;
};