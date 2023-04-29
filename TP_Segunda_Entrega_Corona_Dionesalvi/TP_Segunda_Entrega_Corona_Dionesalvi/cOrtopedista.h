/**
 * Project Untitled
 */


#ifndef _CORTOPEDISTA_H
#define _CORTOPEDISTA_H

#include "cEmpleado.h"



class cOrtopedista : public cEmpleado {
public:

    /**
     * @param string parte_del_cuerpo
     */
    cOrtopedista(string parte_del_cuerpo, string nombre, string apellido, string DNI);

    void consejo_articulosORT();

    /**
     * @param cCliente info
     */

    void contactar_cliente(cCliente info);

    ~cOrtopedista();
protected:


private:
    string parte_del_cuerpo;
};

#endif //_CORTOPEDISTA_H