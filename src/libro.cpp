#include "libro.h"
#include <iostream>
Libro::Libro()
{
    //ctor
}



Libro::~Libro()
{
    //dtor
}


Libro::Libro(int c, string t)
{
    code =c;
    titulo = t;
}

void Libro::imprimir()
{
    cout<<code;
    cout<<titulo;

}
