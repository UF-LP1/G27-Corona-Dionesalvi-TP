/**
 * Project Untitled
 */


#ifndef _CORTOPEDISTA_H
#define _CORTOPEDISTA_H


#include "cEmpleado.h"


using namespace std;

class cOrtopedista : public cEmpleado {
public:

   
    cOrtopedista(string parte_del_cuerpo, string nombre, string apellido, string DNI);

    float trabajar();

    ~cOrtopedista();

protected:


private:
    string parte_del_cuerpo;
};

#endif //_CORTOPEDISTA_H