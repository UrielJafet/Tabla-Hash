#include "CHashTable.h"

CHashTable::CHashTable(unsigned int s)
{
    size = s;
    buckets = new CLista[size];  // cada bucket es una lista vacía
}

CHashTable::~CHashTable()
{
    delete[] buckets;            // liberamos memoria
}

//Funcion hash
unsigned int CHashTable::hashFunction(const std::string& nombre)
{
    unsigned int hashValue = 0;

    for (char c : nombre) {//Recorre cada caracter
        hashValue += c;
        hashValue = (hashValue * 31 + c) % size;
    }//31 es lo suficientemente pequeño para no desbordar en operaciones de enteros

    return hashValue;
}

/*Inserta los nombres*/
void CHashTable::insert(const CPerson& persona) 
{
    unsigned int idx = hashFunction(persona.getNombre());
    buckets[idx].insertarFinal(persona);
}
/*Busca por nombre*/
bool CHashTable::search(const std::string& nombre) {
    unsigned int idx = hashFunction(nombre);
    return buckets[idx].buscar(nombre);
}
/*Elimina por nombre*/
void CHashTable::deleted(const std::string& nombre) {
    unsigned int idx = hashFunction(nombre);
    buckets[idx].eliminarPorNombre(nombre);
}
/*Imprime cada cubeta*/
void CHashTable::print() {
    for (unsigned int i = 0; i < size; i++) {
        std::cout << "Bucket " << i << ": ";
        buckets[i].imprimir();
    }
}