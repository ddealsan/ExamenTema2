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