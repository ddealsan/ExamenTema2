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
    for (const auto& asistencia : estudiante.asistencias) {
        cout << "Fecha: " << asistencia.fecha << " | Materia: " << asistencia.materia << " | Estado: " << asistencia.estado << endl;
    }
}

void registrarAsistencia(Estudiante& estudiante, const string& fecha, const string& materia, const string& estado) {
    Asistencia nuevaAsistencia = {fecha, materia, estado};
    estudiante.asistencias.push_back(nuevaAsistencia);
}