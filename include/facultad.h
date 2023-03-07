#ifndef FACULTAD_H
#define FACULTAD_H
#include "profesor.h"


class Facultad
{
    public:
        Facultad(Profesor*);
        ~Facultad();
        Profesor*  miProfe;

};

#endif // FACULTAD_H
