#include <iostream>
#include <string>
#include "personas.h"
#include "persona.h"
#include "libro.h"

#include <windows.h>

using namespace std;

    Personas people;

void Opcion1(){
    int opc;
    do{
     cout<<"------Opcion 1------\n"
        <<"1) Agregar persona\n"
        <<"2) Agregar y Asignar libro\n"
        <<"3) Mostrar todo\n"
        <<"4) Salir \n";
    cin>>opc;

    switch(opc){
    case 1:{
        string nombre,direccion;
        cout<<"Ingrese el nombre de la persona: ";
        cin>>nombre;
        cout<<"Ingrese la direccion de la persona: ";
        cin>>direccion;
        Persona p(nombre,direccion);
        people.guardarPersona(p);

    }
    break;
    case 2:
        {
            int c,pos;
            string titulo,nombre;
            cout<<"Ingrese el codigo de la libro: ";
            cin>>c;
            cout<<"Ingrese la titulo de la libro: ";
            cin>>titulo;
            Libro l(c,titulo);
            cout<<"ingresa el nombre de la persona a asignar:";
            cin>>nombre;
            pos = people.buscarPersona(nombre);
            if(pos == -1){
                cout<<"persona no encontrada"<<endl;
            }else{
                people.personas[pos].SolicitarLibro(l);
            }

        }
    break;
    case 3:
        people.imprimirPersonas();
        break;

    }
    }while(opc != 4);
}

int main()
{
    int opc;

    cout<<"------Menu------\n"
        <<"Opcion 1(persona - libro)\n"
        <<"Opcion 2(facultad - profesor)\n"
        <<"Opcion 3(usuario - contrasena)\n";
    cin>>opc;

    switch(opc){
    case 1:
        Opcion1();
        break;
    }


    return 0;
}
