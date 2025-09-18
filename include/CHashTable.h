#pragma once
#include "CLista.h"
#include <string.h>
#include <iostream>

class CHashTable
{
private:
    unsigned int size = 10;
    CLista* buckets;//Arreglo de listas para colisiones
    unsigned int hashFunction(const std::string& nombre);
public:

    CHashTable(unsigned int s = 10);
    ~CHashTable();

/*-------------- Metodos --------------*/
    void insert(const CPerson& persona);
    bool search(const std::string& nombre);
    void deleted(const std::string& nombre);
    void print(); 
    void calificacion();

};