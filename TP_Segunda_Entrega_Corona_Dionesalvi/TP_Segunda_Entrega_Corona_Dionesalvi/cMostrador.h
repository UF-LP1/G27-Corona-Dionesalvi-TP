/**
 * Project Untitled
 */


#ifndef _CMOSTRADOR_H
#define _CMOSTRADOR_H

#include "cEmpleado.h"
#include "eDescuentos.h"
#include "cCliente.h"


class cMostrador : public cEmpleado {
public:

    cMostrador(eDescuentos descuento, string nombre, string apellido, string DNI);

    void ticket_saldopagar(cCliente *n, cCarrito* c);

    float trabajar( cCliente* a, cCarrito* c); //aplica dto   //cCliente *n,

    ~cMostrador();

protected:


private:
    eDescuentos descuento;
};

#endif //_CMOSTRADOR_H