#include "CLista.h"

bool CLista::eliminarInicio()
{
    if (isEmpty()) {
        std::cout << "Lista vacía" << std::endl;
        return false;
    }
    return Inicio.eliminarSiguiente();
}

bool CLista::eliminarFinal()
{
    if (isEmpty()) {
        std::cout << "Lista vacía" << std::endl;
        return false;
    }
    if (Final.pAnt == &Inicio) // lista con un solo nodo
        return false;

    return Final.pAnt->pAnt->eliminarSiguiente();
}

// Buscar por nombre
bool CLista::buscar(const std::string& nombre) const {
    CNodo* p = Inicio.pSig;
    while (p != &Final) {
        if (p->persona.getNombre() == nombre)
            return true;
        p = p->pSig;
    }
    return false;
}

// Eliminar por nombre
bool CLista::eliminarPorNombre(const std::string& nombre) {
    CNodo* p = &Inicio;
    while (p->pSig != &Final) {
        if (p->pSig->persona.getNombre() == nombre)
            return p->eliminarSiguiente();
        p = p->pSig;
    }
    return false;
}

// Imprimir todos los nodos
void CLista::imprimir() const {
    CNodo* p = Inicio.pSig;
    while (p != &Final) {
        std::cout << p->persona.getNombre() <<": "<< p->persona.getEdad() << " -> ";
        p = p->pSig;
    }
    std::cout << "-----\n";
}
