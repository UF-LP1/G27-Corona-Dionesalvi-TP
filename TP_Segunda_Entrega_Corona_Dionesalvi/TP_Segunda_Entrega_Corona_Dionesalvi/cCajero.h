/**
 * Project Untitled
 */

#ifndef _CCAJERO_H
#define _CCAJERO_H

#include"cFarmacia.h"

#include <iterator>
#include  <iostream>
class cMostrador;

using namespace std;


class cCajero : public cEmpleado {
public:

    cCajero(string contrasenia_caja, string nombre, string apellido, string DNI);

    void entregar_bolsa(cCarrito* c);
    float trabajar(); //COBRA

    ~cCajero();

protected:

  
private:
    string contrasenia_caja;

};

#endif //_CCAJERO_H