/**
 * Project Untitled
 */


#ifndef _CLIMPIEZA_H
#define _CLIMPIEZA_H

#include "cEmpleado.h"
#include "eHorarios.h"



class cLimpieza : public cEmpleado {
public:

  
    cLimpieza(string empresa_limpieza, string horarios);

    void trabajar();

    ~cLimpieza();

protected:


private:
    string empresa_limpieza;
    eHorarios turnos;
};

#endif //_CLIMPIEZA_H