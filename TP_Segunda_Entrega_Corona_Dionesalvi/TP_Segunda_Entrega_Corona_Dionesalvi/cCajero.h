/**
 * Project Untitled
 */


#ifndef _CCAJERO_H
#define _CCAJERO_H

#include "cEmpleado.h"
#include"cFarmacia.h"
#include "iostream"
#include "string.h"
#include "cCliente.h"
#include "cCarrito.h"

#include <iterator>
using namespace std;


class cCajero : public cEmpleado {
public:

    /**
     * @param string contrasenia_caja
     */
    cCajero(string contrasenia_caja);

    void entrega_ticket();

    void entregar_bolsa();

    float cobrar(cCliente* n, cFarmacia* k);

    /**
     * @param cCliente info
     */
    void datos_cliente(cCliente info);
protected:

    ~cCajero();
private:
    string contrasenia_caja;

};

#endif //_CCAJERO_H