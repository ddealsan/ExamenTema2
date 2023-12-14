#include <stdio.h>
#include <string.h>

#define MAX_ASISTENCIAS 100

struct Asistencia {
    char fecha[20];
    char materia[50];
    char estado[20];
};

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    struct Asistencia asistencias[MAX_ASISTENCIAS];
    int numAsistencias;
};
