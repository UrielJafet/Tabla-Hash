#include <iostream>
#include "CHashTable.h"
#include "CPerson.h"
using namespace std;

int main()
{
    CHashTable hash(10);

    CPerson p[] = {
        CPerson("Uriel", 22),
        CPerson("Maria", 21),
        CPerson("Pedro", 23),
        CPerson("Luis", 24),
        CPerson("Ana", 20),
        /*CPerson("Hector", 22),
        CPerson("Victor", 21),
        CPerson("Ivan", 23),
        CPerson("Elsa", 24),
        CPerson("Bruno", 20),
        CPerson("Nora", 20)*/
    };

    hash.insert(p[0]);
    hash.insert(p[1]);
    hash.insert(p[2]);
    hash.insert(p[3]);
    hash.insert(p[4]);
    /*hash.insert(p[5]);
    hash.insert(p[6]);
    hash.insert(p[7]);
    hash.insert(p[8]);
    hash.insert(p[9]);
    hash.insert(p[10]);*/

    
    // Imprimir todos los buckets
    cout << "=== Tabla Hash ===\n" << endl;
    hash.print();

    cout << "\n\nBuscando Maria: " << (hash.search("Maria") ? "Encontrada" : "No encontrada") << endl;
    cout << "Buscando Juan: " << (hash.search("Juan") ? "Encontrado\n\n" : "No encontrado\n\n") << endl;

    hash.deleted("Pedro");
    cout << "Pedro fue eliminado\n" << endl;
    // Imprimir todos los buckets
    cout << "=== Tabla Hash ===\n" << endl;
    hash.print();

    return 0;
}
