/**
 * Project Untitled
 */


#ifndef _CMOSTRADOR_H
#define _CMOSTRADOR_H

#include "cEmpleado.h"


class cMostrador : public cEmpleado {
public:

    /**
     * @param string diadedescuento
     */

    cMostrador(string diadedescuento);

    void expender_recetas();

    void ticket_saldopagar();

    void aplicar_descuento();

    /**
     * @param cCliente info
     */

    void contactar_cliente(cCliente info);

    ~cMostrador();

protected:


private:
    string diadedescuento;
};

#endif //_CMOSTRADOR_H