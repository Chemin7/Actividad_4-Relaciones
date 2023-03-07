#ifndef PERSONAS_H
#define PERSONAS_H
#include "persona.h"
#include <vector>

class Personas
{
    public:
        Personas();
        ~Personas();

        vector<Persona> personas;

        void guardarPersona(Persona);
        void imprimirPersonas();
        int buscarPersona(string);
        void clearCache();

};

#endif // PERSONAS_H
