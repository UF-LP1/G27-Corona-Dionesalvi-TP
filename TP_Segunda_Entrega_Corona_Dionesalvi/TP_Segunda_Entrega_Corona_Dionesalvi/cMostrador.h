/**
 * Project Untitled
 */


#ifndef _CMOSTRADOR_H
#define _CMOSTRADOR_H

#include "cEmpleado.h"
#include "eDescuentos.h"



class cMostrador : public cEmpleado {
public:

    cMostrador(eDescuentos descuento, string nombre, string apellido, string DNI);

    void ticket_saldopagar();

    float trabajar(); //aplica dto   

    ~cMostrador();

private:
    eDescuentos descuento;
};

#endif //_CMOSTRADOR_H