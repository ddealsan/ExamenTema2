#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Asistencia{
    string nombre;
    string materia;
    string estado;
};
struct Estudiante{
    string nombre;
    int edad;
    float promedio;
    vector<Asistencia> asistencias;
};
