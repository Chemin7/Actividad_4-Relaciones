#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include "password.h"
#include "persona.h"
using namespace std;

class Usuario:public Persona
{
    public:
        Usuario(string,string,string);
        ~Usuario();
        void autenticar(string);
        Password myPassword;

};

#endif // USUARIO_H
