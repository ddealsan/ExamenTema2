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

void mostrarEstudiante(Estudiante estudiante){
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
    cout << "Asistencias: " << endl;

}