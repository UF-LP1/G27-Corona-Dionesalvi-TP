/**
 * Project Untitled
 */


#ifndef _CPERFUMEROS_H
#define _CPERFUMEROS_H

#include "cEmpleado.h"


class cPerfumeros : public cEmpleado {
public:

   
    cPerfumeros(string credencial, string nombre, string apellido, string DNI);

    float trabajar();

    ~cPerfumeros();

private:
    const string credencial;
};

#endif //_CPERFUMEROS_H