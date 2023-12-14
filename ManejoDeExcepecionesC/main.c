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