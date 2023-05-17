/**
 * Project Untitled
 */


#ifndef _CFARMACIA_H
#define _CFARMACIA_H


#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include "cCliente.h"
#include "eListaNecesidad.h"
#include "cProductos.h"
#include "cEmpleado.h"
#include "iterator"

using namespace std;


class cFarmacia {
public:

    cFarmacia(string nombre, string direccion, string horario, string ticket_recepcion, eListaNecesidad eNecesidad_cliente, int turno, double fondos, list<cProductos> lista_productos, list<cEmpleado> lista_empleado);


    void set_horario(string nuevo_horario);
    void sumar_fondos(double fondo_actualizado);
    bool derivar_cliente(cCliente *n);
    list <cProductos> get_lista_productos();


protected:

    ~cFarmacia();
private:
    string nombre;
    string direccion;
    string horario;
    string ticket_recepcion;
    int turno;
    double fondos;
    list<cProductos> *lista_productos;
    list<cEmpleado> lista_empleado; 
};

#endif //_CFARMACIA_H