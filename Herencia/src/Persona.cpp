#include "Persona.h"

Persona::Persona()
{
    setNombre("");
    setApellido("");
    setEdad(0);
    setDni(0);
}

Persona::Persona(string n, int _edad, int _dni)
{
    string _n;
    string _a;

    int c = 0;

    while(n[c] != ' ')
    {
        _n += n[c];
        c++;
    }
    for(int i = 0; n[c] != '\0'; i++)
    {
        _a += n[c+1];
        c++;
    }

    setNombre(_n);
    setApellido(_a);
    setEdad(_edad);
    setDni(_dni);
}

Persona::~Persona()
{
    //dtor
}

void Persona::setNombre(string n)
{
    nombre = n;
}
void Persona::setApellido(string a)
{
    apellido = a;
}
void Persona::setEdad(uint8_t edad)
{
    this->edad = edad;
}
void Persona::setDni(int dni)
{
    this->dni = dni;
}

void Persona::Print()
{
    printf("Nombre: %s\n", nombre.c_str());
    printf("Apellido: %s\n", apellido.c_str());
    printf("Edad: %i\n", edad);
    printf("DNI: %i\n", dni);
}
