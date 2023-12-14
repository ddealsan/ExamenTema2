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

void mostrarEstudiante(const struct Estudiante* estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %f\n", estudiante->promedio);
    printf("Asistencias:\n");
    for (int i = 0; i < estudiante->numAsistencias; ++i) {
        printf("Fecha: %s | Materia: %s | Estado: %s\n",
               estudiante->asistencias[i].fecha,
               estudiante->asistencias[i].materia,
               estudiante->asistencias[i].estado);
    }
}