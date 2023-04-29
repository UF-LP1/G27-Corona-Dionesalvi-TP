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
float cCajero::cobrar(cCliente* n, cFarmacia* k) { //FUNCION OBLIGATORIA
    float monto_total = 0;
    list<cProductos> aux = n->get_carro()->get_lista_productosllevados(); //guardo informacion en n

    for (list<cProductos>::iterator it_ = aux.begin(); it_ != aux.end(); it_++) {  //bucle hasta el final de la lista 
        //for (cProductos MiProducto: n->get_carro()->get_lista_productosllevados()) { --> OTRA ALTERNATIVA
        monto_total += it_->get_precio();   //acumulamos el monto total 
    }
    n->set_billetera(-monto_total);                 //le descontamos al cliente de su billetera lo que pago 
    k->set_fondos(+monto_total);                      // le sumamos lo que pago el cliente a los fondos de la farmacia 

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