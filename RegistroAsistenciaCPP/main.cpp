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
        cout << "Fecha: " << asistencia.nombre << " | Materia: " << asistencia.materia << " | Estado: " << asistencia.estado << endl;
    }
}

void registrarAsistencia(Estudiante& estudiante, const string& fecha, const string& materia, const string& estado) {
    Asistencia nuevaAsistencia = {fecha, materia, estado};
    estudiante.asistencias.push_back(nuevaAsistencia);
}

int main(){
    Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;
    registrarAsistencia(estudiante1, "2023-01-02", "Historia", "falta");
    registrarAsistencia(estudiante1, "2023-01-03", "Programación", "tardanza");
    mostrarEstudiante(estudiante1);
}