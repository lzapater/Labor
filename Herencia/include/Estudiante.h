#include "Estudiante.h"

Estudiante::Estudiante()
{
    setNombre("");
    setApellido("");
    setEdad(0);
    setDni(0);
    setColegio("");
    setCodigo(0);
}

Estudiante::~Estudiante(){}

void Estudiante::setColegio(string colegio)
{
    this->colegio = colegio;
}

void Estudiante::setCodigo(int codigo)
{
    this->codigo = codigo;
}

void Estudiante::Print()
{
    printf("Nombre: %s\nApellido: %s\n", nombre.c_str(), apellido.c_str());
    printf("Edad: %i\n", edad);
    printf("DNI: %i\n", dni);
    printf("Colegio: %s\nCodigo: %i\n", colegio.c_str(), codigo);
}
