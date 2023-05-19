/**
 * Project Untitled
 */


#ifndef _CFARMACEUTICO_H
#define _CFARMACEUTICO_H



#include "cEmpleado.h"
#include "eMedicamentos.h"


class cFarmaceutico : public cEmpleado {
public:

    
    cFarmaceutico(string matricula, string nombre, string apellido, string DNI);


    void recomendacion_med();

    ~cFarmaceutico();
protected:


private:
    const string matricula;
};

#endif //_CFARMACEUTICO_H