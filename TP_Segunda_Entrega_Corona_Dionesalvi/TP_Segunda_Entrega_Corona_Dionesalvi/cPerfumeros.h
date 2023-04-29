/**
 * Project Untitled
 */


#ifndef _CPERFUMEROS_H
#define _CPERFUMEROS_H

#include "cEmpleado.h"


class cPerfumeros : public cEmpleado {
public:

    /**
     * @param string credencial
     */
    cPerfumeros(string credencial, string nombre, string apellido, string DNI);

    void asesorar_perf();

    /**
     * @param cCliente info
     */
    void contactar_cliente(cCliente info);

    ~cPerfumeros();

protected:


private:
    const string credencial;
};

#endif //_CPERFUMEROS_H