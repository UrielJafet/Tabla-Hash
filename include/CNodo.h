#pragma once
#include "CPerson.h"

class CNodo
{
public:
    CPerson persona;

    CNodo* pSig;   //Puntero al siguiente nodo
    CNodo* pAnt;   //Puntero al nodo anterior

    CNodo(CPerson per);            //Constructor con alumno
    void insertarAdelante(CPerson per);//Inserta alumno
    bool eliminarSiguiente();//Elimina nodo siguiente
};
