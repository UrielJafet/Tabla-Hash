#pragma once
#include <iostream>
#include <string.h>

class CPerson
{
private:
    std::string nombre;
    int edad;
    //otros datos...
public:

    // Constructor
    CPerson() : nombre(""), edad(0) {}

    // Constructor con parámetros
    CPerson(const std::string& n, int e) : nombre(n), edad(e) {}

    // Getters y setters
    std::string getNombre() const { return nombre; }
    void setNombre(const std::string& n) { nombre = n; }

    int getEdad() const { return edad; }
    void setEdad(int e) { edad = e; }

};