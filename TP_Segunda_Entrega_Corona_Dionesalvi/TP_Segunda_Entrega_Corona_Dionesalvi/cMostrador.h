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

    cMostrador( eDescuentos descuento);

    void ticket_saldopagar(cCliente *n);

    float trabajar(cCliente *n);

    ~cMostrador();

protected:


private:
    eDescuentos descuento;
};

#endif //_CMOSTRADOR_H