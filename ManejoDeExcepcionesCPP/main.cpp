#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

class AsistenciaInvalidaException : public runtime_error {
public:
    AsistenciaInvalidaException(const string& mensaje) : runtime_error(mensaje) {}
};

class EstudianteException : public runtime_error {
public:
    EstudianteException(const string& mensaje) : runtime_error(mensaje) {}
};

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
    vector<Asistencia> asistencias;
};

struct Asistencia {
    string fecha;
    string materia;
    string estado;
};

void mostrarEstudiante(const Estudiante& estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
    cout << "Asistencias: " << endl;
    for (const auto& asistencia : estudiante.asistencias) {
        cout << "Fecha: " << asistencia.fecha << " | Materia: " << asistencia.materia << " | Estado: " << asistencia.estado << endl;
    }
}

void registrarAsistencia(Estudiante& estudiante, const string& fecha, const string& materia, const string& estado) {
    if (estado != "asistió" && estado != "falta" && estado != "tardanza") {
        throw AsistenciaInvalidaException("Estado de asistencia inválido");
    }

    Asistencia nuevaAsistencia = {fecha, materia, estado};
    estudiante.asistencias.push_back(nuevaAsistencia);
}

int main() {
    try {
        Estudiante estudiante1;
        estudiante1.nombre = "Juan";
        estudiante1.edad = 20;
        estudiante1.promedio = 9.5;