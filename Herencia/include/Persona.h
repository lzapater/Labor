#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Persona
{
protected:
    string nombre;
    string apellido;
    uint8_t edad;
    int dni;
public:
    Persona();
    Persona(string, uint8_t, int);
    virtual ~Persona();

    string getNombre(){return nombre;}
    string getApellido(){return apellido;}
    uint8_t getEdad(){return edad;}
    int getdni(){return dni;}

    void setNombre(string);
    void setApellido(string);
    void setEdad(uint8_t);
    void setDni(int);

    virtual void Print();
};

#endif // PERSONA_H
