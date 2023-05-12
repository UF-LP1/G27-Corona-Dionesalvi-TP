/**
 * Project Untitled
 */


#ifndef _CFARMACIA_H
#define _CFARMACIA_H


#include "iostream"
#include "string.h"
#include "cCliente.h"
#include "eListaNecesidad.h"
#include "cProductos.h"
#include "cEmpleado.h"
#include <vector>
#include <list>
#include <ctime>
#include "iterator"

using namespace std;


class cFarmacia {
public:

    void Operation1();

    /**
     * @param string nombre
     * @param string direccion
     * @param string horario
     * @param string ticket_recepcion
     * @param eNecesidad_cliente
     * @param int turno
     */

    cFarmacia(string nombre, string direccion, string horario, string ticket_recepcion, eListaNecesidad eNecesidad_cliente, int turno, double fondos, cProductos lista_productos, cEmpleado lista_empleado);

    /**
     * @param nuevo_horario
     */
    void set_horario(string nuevo_horario);
    void sumar_fondos(double fondo_actualizado);
    bool derivar_cliente(cCliente *n);

    /**
     * @param turno_asignado
     */
    int asignaturno(int turno_asignado);
protected:

    ~cFarmacia();
private:
    string nombre;
    string direccion;
    string horario;
    string ticket_recepcion;
    int turno;
    double fondos;
    list<cProductos> lista_productos;
    list<cEmpleado> lista_empleado; 
};

#endif //_CFARMACIA_H