#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Estudiante{
    string nombre;
    int edad;
    float promedio;
    vector<string> materias;
};

void mostrarEstudiante(Estudiante estudiante){
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
    cout << "Materias: " << endl;
    for (const auto& materia : estudiante.materias) {
        std::cout << " " << materia;
        }
}


void agregarMateria(Estudiante& estudiante, const string& materia) {
    estudiante.materias.push_back(materia);
}

void eliminarMateria(Estudiante& estudiante, const string& materia) {
    auto it = find(estudiante.materias.begin(), estudiante.materias.end(), materia);
    if (it != estudiante.materias.end()) {
        estudiante.materias.erase(it);
    }
}


int main(){
    Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;
    agregarMateria(estudiante1, "Matemáticas");
    agregarMateria(estudiante1, "Historia");
    agregarMateria(estudiante1, "Programación");
    eliminarMateria(estudiante1, "Historia");
    mostrarEstudiante(estudiante1);


    return 0;
}