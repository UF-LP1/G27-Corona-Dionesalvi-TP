/**
 * Project Untitled
 */

#ifndef _CCAJERO_H
#define _CCAJERO_H

#include "cEmpleado.h"
#include"cFarmacia.h"
#include "cCliente.h"
#include "cCarrito.h"

#include <iterator>
using namespace std;


class cCajero : public cEmpleado {
public:

    cCajero(string contrasenia_caja, string nombre, string apellido, string DNI);

    void entregar_bolsa(cCarrito* c);
    float trabajar(cCliente* n, cFarmacia* k, cMostrador*j); //COBRA

    ~cCajero();

protected:

  
private:
    string contrasenia_caja;

};

#endif //_CCAJERO_H