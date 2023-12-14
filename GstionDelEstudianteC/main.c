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

void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %f\n", estudiante.promedio);
    printf("Materias:\n");
    for (int i = 0; i < estudiante.numMaterias; ++i) {
        printf(" %s\n", estudiante.materias[i]);
    }
}


void agregarMateria(struct Estudiante* estudiante, const char* materia) {
    if (estudiante->numMaterias < MAX_MATERIAS) {
        strcpy(estudiante->materias[estudiante->numMaterias], materia);
        estudiante->numMaterias++;
    } else {
        printf("Error: No se pueden agregar más materias.\n");
    }
}


void eliminarMateria(struct Estudiante* estudiante, const char* materia) {
    for (int i = 0; i < estudiante->numMaterias; ++i) {
        if (strcmp(estudiante->materias[i], materia) == 0) {
            for (int j = i; j < estudiante->numMaterias - 1; ++j) {
                strcpy(estudiante->materias[j], estudiante->materias[j + 1]);
            }
            estudiante->numMaterias--;
            return;
        }
    }
    printf("Error: La materia no se encontró.\n");
}

int main() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;
    estudiante1.numMaterias = 0;

    agregarMateria(&estudiante1, "Matemáticas");
    agregarMateria(&estudiante1, "Historia");
    agregarMateria(&estudiante1, "Programación");
    eliminarMateria(&estudiante1, "Historia");

    mostrarEstudiante(estudiante1);

    return 0;
}