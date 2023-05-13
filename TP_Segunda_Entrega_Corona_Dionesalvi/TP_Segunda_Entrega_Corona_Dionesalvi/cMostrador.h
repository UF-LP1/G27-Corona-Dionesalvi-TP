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

    /**
     * @param string diadedescuento
     */

    cMostrador( eDescuentos descuento);

    void ticket_saldopagar(cCliente *n);

    float aplicar_descuento(cCliente *n);

    /**
     * @param cCliente info
     */

    void contactar_cliente(cCliente info);

    ~cMostrador();

protected:


private:
    eDescuentos descuento;
};

#endif //_CMOSTRADOR_H