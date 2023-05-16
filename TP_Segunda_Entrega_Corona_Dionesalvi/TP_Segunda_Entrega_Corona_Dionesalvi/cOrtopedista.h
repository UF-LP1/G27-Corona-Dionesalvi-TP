/**
 * Project Untitled
 */


#ifndef _CORTOPEDISTA_H
#define _CORTOPEDISTA_H

#include "cEmpleado.h"
#include "vector"
#include <iostream>

using namespace std;

class cOrtopedista : public cEmpleado {
public:

    /**
     * @param string parte_del_cuerpo
     */
    cOrtopedista(string parte_del_cuerpo, string nombre, string apellido, string DNI, cProductos lista_productosORT);

    void consejo_articulosORT();

    /**
     * @param cCliente info
     */

    void contactar_cliente(cCliente info);

    ~cOrtopedista();
protected:


private:
    string parte_del_cuerpo;
    list<cProductos> lista_productosORT;
};

#endif //_CORTOPEDISTA_H