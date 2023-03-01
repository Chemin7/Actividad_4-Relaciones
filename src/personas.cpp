#include "personas.h"
#include <iostream>
using namespace std;
Personas::Personas()
{
    //ctor
}

Personas::~Personas()
{
    //dtor
}

void Personas::guardarPersona(Persona p)
{
    personas.push_back(p);

}

void Personas::imprimirPersonas()
{
    cout<<"Personas "<<endl;
    for(Persona p:personas){
        cout<<p.nombre<<"\n"
            <<p.direccion<<"\n";
            p.imprimirLibros();
            cout<<"------------------"<<"\n";
    }
}

int Personas::buscarPersona(string n)
{
    for(int i = 0; i < personas.size();i++){
        if(personas[i].nombre == n){
            cout<<"Persona encontrada"<<"\n";
            return i;
        }

    }

    return -1;
}
