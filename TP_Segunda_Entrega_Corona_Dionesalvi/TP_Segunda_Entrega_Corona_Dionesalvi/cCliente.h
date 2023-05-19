/**
 * Project Untitled
 */


#ifndef _CCLIENTE_H
#define _CCLIENTE_H


#include "eFormadepago.h"
#include "eOS.h"
#include "cCarrito.h"


using namespace std;

class cCliente {
public:

    cCliente(string nombre, string apellido, string DNI, string mail, string formatoticket, eOS OS, eFormadepago formadepago, string receta, list<string> productos_requeridos, float billetera, cCarrito *carro, eListaNecesidad necesidad);

    string get_mail();

    const string get_DNI();

    void restar_saldo_billetera(float nuevo_monto);

    eOS get_OS();

    string get_formatoticket();

    eListaNecesidad get_necesidad();

    list <string> get_lista_productos_requeridos();

    cCarrito* get_carro();

    string get_nombre();

    float get_billetera();
        

    ~cCliente();

   
private:
    string nombre;
    string apellido;
    const string DNI;
    string mail;
    string formatoticket;
    eOS OS;
    eFormadepago formadepago;
    string receta;
    list <string> productos_requeridos;
    float billetera;
    cCarrito *carro;
    eListaNecesidad necesidad;
   
};

#endif //_CCLIENTE_H