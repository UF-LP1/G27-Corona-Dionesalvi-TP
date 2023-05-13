/**
 * Project Untitled
 */


#ifndef _CFARMACEUTICO_H
#define _CFARMACEUTICO_H



#include "cEmpleado.h"


class cFarmaceutico : public cEmpleado {
public:

    /**
     * @param string matricula
     */
    cFarmaceutico(string matricula);


    void recomendacion_med();

    /**
     * @param cCliente info
     */
    void contactar_cliente(cCliente info);

    ~cFarmaceutico();
protected:


private:
    const string matricula;
};

#endif //_CFARMACEUTICO_H