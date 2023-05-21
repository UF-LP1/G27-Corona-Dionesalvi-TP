/**
 * Project Untitled
 */


#ifndef _CFARMACIA_H
#define _CFARMACIA_H

#include <list>
#include <ctime>
#include <string>
#include <iterator> 
#include "eListaNecesidad.h"
#include "cProductos.h"
#include "cEmpleado.h"
#include "cOrtopedista.h"
#include "cPerfumeros.h"
#include "cFarmaceutico.h"

using namespace std;

class cFarmacia {
public:

    cFarmacia(string nombre, string direccion, string horario, string ticket_recepcion, double fondos, list<cProductos> lista_productos, list<cEmpleado> lista_empleados);

    void set_horario(string nuevo_horario);
    void sumar_fondos(double fondo_actualizado);
    bool derivar_cliente(cCliente *n);
    list <cProductos> *get_lista_productos();
    ~cFarmacia();

private:
    string nombre;
    string direccion;
    string horario;
    string ticket_recepcion;
    double fondos;
    list<cProductos> *lista_productos;
    list<cEmpleado> lista_empleados; 
    
};

#endif //_CFARMACIA_H