#pragma once
#include "CNodo.h"

class CLista
{
private:

    CNodo Inicio; // nodo centinela
    CNodo Final;  // nodo centinela

public:
// Constructor: enlaza los nodos centinela
    CLista() : Inicio(CPerson()), Final(CPerson()) {
        Inicio.pSig = &Final;
        Final.pAnt = &Inicio;
    }

//Destructor: elimina todos los nodos
    ~CLista() {
        while (!isEmpty())
            eliminarInicio();
    }

    void insertarFinal(CPerson per) { Final.pAnt->insertarAdelante(per); }//Inserta al final de la lista
    bool eliminarInicio();//Elimina 1er nodo
    bool eliminarFinal();//Elimina ultimo nodo
    bool isEmpty() const { return Inicio.pSig == &Final; }//Lista vacia?

    /*Metodos para la tabla hash*/

    bool buscar(const std::string& nombre) const;
    bool eliminarPorNombre(const std::string& nombre);
    void imprimir() const;
};

