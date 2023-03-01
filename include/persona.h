#ifndef PERSONA_H
#define PERSONA_H
#include "libro.h"
#include "string"
#include <vector>

using namespace std;
class Persona
{
    public:
        Persona();
        ~Persona();
        Persona(string,string);
        string nombre;
        string direccion;
        void SolicitarLibro(Libro);
        vector<Libro> libros;
        void imprimirLibros();
};

#endif // PERSONA_H
