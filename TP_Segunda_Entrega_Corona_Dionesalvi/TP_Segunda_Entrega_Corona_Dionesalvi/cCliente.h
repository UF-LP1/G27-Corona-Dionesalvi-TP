/**
 * Project Untitled
 */


#ifndef _CCLIENTE_H
#define _CCLIENTE_H


#include "eFormadepago.h"
#include "cMostrador.h"
#include "cCajero.h"
#include "cCarrito.h"

#include "iostream"
#include "string.h"
#include "vector"

using namespace std;

class cCliente {
public:

    /**
     * @param string nombre
     * @param string apellido
     * @param string DNI
     * @param string mail
     * @param string formatoticket
     * @param string OS
     * @param eFormadepago formadepago
     * @param string receta
     * @param string lista_productos
     */
    cCliente(string nombre, string apellido, string DNI, string mail, string formatoticket, string OS, eFormadepago formadepago, string receta, string lista_productos_requeridos, float billetera, cCarrito carro);

    string get_mail();

    const string get_DNI();

    void set_billetera(float nuevo_monto);


    string get_formatoticket();


    /**
     * @param cMostrador n
     */
    void recibir_ticket(cMostrador n);
    /**
     * @param cCajero n
     */
    void recibir_bolsacompras(cCajero n);
    cCarrito* get_carro();

    void agregar_lista_productos_requeridos();   //Metodo que agrega productos a la lista una vez que el cliente esta adentro de la farmacia 

protected:

    ~cCliente();
private:
    string nombre;
    string apellido;
    const string DNI;
    string mail;
    string formatoticket;
    string OS;
    eFormadepago formadepago;
    string receta;
    initializer_list<string> lista_productos_requeridos;
    float billetera;
    cCarrito carro;
};

#endif //_CCLIENTE_H