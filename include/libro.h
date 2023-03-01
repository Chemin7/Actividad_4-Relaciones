#ifndef LIBRO_H
#define LIBRO_H
#include <string>

using namespace std;

class Libro
{
    public:
        Libro();
        Libro(int,string);
        ~Libro();

        int code;
        string titulo;
        void imprimir();



};

#endif // LIBRO_H
