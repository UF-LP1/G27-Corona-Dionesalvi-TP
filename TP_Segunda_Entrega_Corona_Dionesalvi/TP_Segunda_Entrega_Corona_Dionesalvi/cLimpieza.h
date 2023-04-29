/**
 * Project Untitled
 */


#ifndef _CLIMPIEZA_H
#define _CLIMPIEZA_H

#include "cEmpleado.h"
#include "eHorarios.h"



class cLimpieza : public cEmpleado {
public:

    /**
     * @param string empresa_limpieza
     * @param string horarios
     */
    cLimpieza(string empresa_limpieza, string horarios);

    void limpiar();

    /**
     * @param cCliente info
     */
    void contactar_cliente(cCliente info);

    ~cLimpieza();

protected:


private:
    string empresa_limpieza;
    eHorarios turnos;
};

#endif //_CLIMPIEZA_H