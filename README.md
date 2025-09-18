# Implementación de Tabla Hash en C++  

Este proyecto implementa una **tabla hash** utilizando **listas doblemente enlazadas** como técnica de *chaining* para resolver colisiones.  
La estructura permite **insertar, buscar, eliminar e imprimir** datos de personas (`CPerson`), distribuidos en buckets generados por una función hash.

---

## 🚀 Características
- Inserción de objetos `CPerson` en la tabla hash.  
- Búsqueda eficiente por nombre.  
- Eliminación de elementos por clave (nombre).  
- Impresión de todos los buckets y sus elementos.  
- Función hash basada en la suma y multiplicación de caracteres para evitar desbordamientos y mejorar la dispersión.  
- Manejo de colisiones mediante listas doblemente enlazadas con nodos centinela.  

---

## 🗂️ Estructura del proyecto
- **CHashTable** → Implementa la tabla hash y sus operaciones.  
- **CLista** → Lista doblemente enlazada para manejar colisiones.  
- **CNodo** → Nodo de la lista que almacena objetos `CPerson`.  
- **CPerson** → Clase auxiliar para almacenar datos (ej. nombre y edad).  

---

## ⚙️ Compilación y ejecución
### Usando g++
```bash
g++ -Iinclude src/*.cpp main.cpp -o hashTable
./hashTable
