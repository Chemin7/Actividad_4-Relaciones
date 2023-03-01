#include "persona.h"
#include <iostream>
#include "libro.h"
using namespace std;
Persona::Persona()
{

}

Persona::~Persona()
{
    //dtor
}
Persona::Persona(string n, string d)
{
 nombre=n;
 direccion=d;
}

void Persona::SolicitarLibro(Libro l)
{
    libros.push_back(l);
}

void Persona::imprimirLibros()
{
    cout<<"Libros de "<<nombre<<endl;
    for(int i = 0;i < libros.size();i++){
        libros[i].imprimir();
    }
}
