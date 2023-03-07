#include "usuario.h"
#include <iostream>
using namespace std;

Usuario::~Usuario()
{
    //dtor
}

Usuario::Usuario(string n, string d,string pass):Persona(n,d)
{
    nombre = n;
    direccion = d;
    myPassword.contenido = pass;
}


void Usuario::autenticar(string pass)
{
    if(pass == myPassword.contenido){
        cout<<"Bienvenido "<<nombre<<endl;
    }else{
        cout<<"Contrasena incorrecta"<<endl;
    }
}
