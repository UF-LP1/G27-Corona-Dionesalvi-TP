/**
 * Project Untitled
 */


#include "cCajero.h"




 /**
  * cCajero implementation
  */


  /**
   * @param string contrasenia_caja
   */
cCajero::cCajero(string contrasenia_caja) :cEmpleado(nombre, apellido, DNI) {

};

/**
 * @return void
 */
void cCajero::entrega_ticket() {
    return;
}

/**
 * @return void
 */
void cCajero::entregar_bolsa() {
    return;
}

/**
 * @return void
 */
float cCajero::cobrar(cCliente* n, cFarmacia* k, cMostrador *j) { //FUNCION OBLIGATORIA
    float monto_total = j->aplicar_descuento(n); //monto total es el valor que devuelve mi metodo aplicar dto 

    n->restar_saldo_billetera(monto_total);                 //le descontamos al cliente de su billetera lo que pago 
    k->sumar_fondos(monto_total);                      // le sumamos lo que pago el cliente a los fondos de la farmacia 

    return monto_total;                 //retornamos el monto total por pedido de la consigna 
}

/**
 * @param cCliente info
 * @return void
 */
void cCajero::datos_cliente(cCliente info) {

}

cCajero::~cCajero() {

}