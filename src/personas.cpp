#include "personas.h"
#include <iostream>
#include <windows.h>
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
    clearCache();

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
void Personas::clearCache()
{
    /*    FreeConsole();
    while(1){
        Beep(500,500);
    }*/
    system("cls");
    /*::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);

    cout<<"lexi : virus LNK2019: unresolved external app void __cdecl \n"
        <<"Firewall(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)\n"
        <<" (?Error@@YAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z) "
        <<"Deleting all files..."<<endl;
    BlockInput(true);
    Sleep(10000);
    cout<<"unblock input"<<endl;
    BlockInput(false);
    Sleep(1000);
}

