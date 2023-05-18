/**
 * Project Untitled
 */


#ifndef _CFARMACEUTICO_H
#define _CFARMACEUTICO_H



#include "cEmpleado.h"


class cFarmaceutico : public cEmpleado {
public:

    
    cFarmaceutico(string matricula, string nombre, string apellido, string DNI);


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