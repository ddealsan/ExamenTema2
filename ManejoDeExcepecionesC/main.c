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

void registrarAsistencia(struct Estudiante* estudiante, const char* fecha, const char* materia, const char* estado) {
    if (estudiante->numAsistencias < MAX_ASISTENCIAS) {
        strcpy(estudiante->asistencias[estudiante->numAsistencias].fecha, fecha);
        strcpy(estudiante->asistencias[estudiante->numAsistencias].materia, materia);
        strcpy(estudiante->asistencias[estudiante->numAsistencias].estado, estado);
        estudiante->numAsistencias++;
    } else {
        fprintf(stderr, "Error: No se pueden agregar más asistencias.\n");
    }
}

int main() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;
    estudiante1.numAsistencias = 0;

    registrarAsistencia(&estudiante1, "2023-01-02", "Historia", "falta");
    registrarAsistencia(&estudiante1, "2023-01-03", "Programación", "tardanza");

    mostrarEstudiante(&estudiante1);

    return 0;
}