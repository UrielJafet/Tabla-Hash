#include "CNodo.h"
//Inicializacion punteros y alumno
CNodo::CNodo(CPerson per) : persona(per), pSig(nullptr), pAnt(nullptr) {}

// Inserta un nodo con el alumno justo después de este nodo
void CNodo::insertarAdelante(CPerson per)
{
    CNodo* nuevo = new CNodo(per);
    nuevo->pSig = this->pSig;
    nuevo->pAnt = this;

    if (this->pSig != nullptr)
        this->pSig->pAnt = nuevo;

    this->pSig = nuevo;
}
// Elimina el nodo que sigue a este, si existe
bool CNodo::eliminarSiguiente()
{
    if (this->pSig == nullptr)
        return false;

    CNodo* nodoAEliminar = this->pSig;
    this->pSig = nodoAEliminar->pSig;

    if (nodoAEliminar->pSig != nullptr)
        nodoAEliminar->pSig->pAnt = this;

    delete nodoAEliminar;
    return true;
}
