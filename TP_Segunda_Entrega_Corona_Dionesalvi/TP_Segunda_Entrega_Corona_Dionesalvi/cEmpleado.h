/**
 * Project Untitled
 */


#ifndef _CEMPLEADO_H
#define _CEMPLEADO_H


#include "cFarmacia.h"
#include "cEmpleado.h"
#include "cCliente.h"



class cEmpleado {
public:

    /**
     * @param string nombre
     * @param string apellido
     * @param string DNI
     */
    cEmpleado(string nombre, string apellido, string DNI);

    string get_DNI();

    void dosificacionyrecomendacion();

    int descuento();

    void guardarcompraenbolsa();

    void asesoraperfumeria();

    void facturaperfumeria();

    void asesoraortopedia();

    void empacarproducto();

    void generarticket();

    /**
     * @param cFarmacia farmacia
     */
    void infoFarmacia(cFarmacia farmacia);

    /**
     * @param cCliente cliente
     */
    void infoCliente(cCliente cliente);

    ~cEmpleado();

protected:
    string nombre;
    string apellido;
    const string DNI;

};

#endif //_CEMPLEADO_H