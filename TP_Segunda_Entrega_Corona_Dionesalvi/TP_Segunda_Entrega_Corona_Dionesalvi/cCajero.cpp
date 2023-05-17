/**
 * Project Untitled
 */


#include "cCajero.h"


cCajero::cCajero(string contrasenia_caja) :cEmpleado(nombre, apellido, DNI) {

};


void cCajero::entregar_bolsa(cCarrito* c) { //IMPRIME LISTA PRODUCTOS LLEVADOS
    c->get_lista_productosllevados();
    cout << c; 
    return;
}


float cCajero::trabajar(cCliente* n, cFarmacia* k, cMostrador *j) { //FUNCION OBLIGATORIA
    float monto_total = j->aplicar_descuento(n); //monto total es el valor que devuelve mi metodo aplicar dto 

    n->restar_saldo_billetera(monto_total);                 //le descontamos al cliente de su billetera lo que pago 
    k->sumar_fondos(monto_total);                      // le sumamos lo que pago el cliente a los fondos de la farmacia 

    return monto_total;                 //retornamos el monto total por pedido de la consigna 
}



cCajero::~cCajero() {

}