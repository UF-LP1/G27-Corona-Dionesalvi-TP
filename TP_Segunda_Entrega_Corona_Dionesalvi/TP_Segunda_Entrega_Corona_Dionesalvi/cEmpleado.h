/**
 * Project Untitled
 */


#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H

#include "cCliente.h"

class cEmpleado {
public:

  
    cEmpleado(string nombre, string apellido, string DNI);

    string get_DNI();
    void recibir_cliente(cCliente* n);
    virtual float trabajar(); //método polimorfico, TODOS MIS EMPLEADOS TRABAJAN,PERO LAS REDEFINO PARA C/u

    ~cEmpleado();

protected:

    string nombre;
    string apellido;
    const string DNI;

};

#endif //_CEMPLEADO_H