/**
 * Project Untitled
 */


#include "cCliente.h"

 /**
  * cCliente implementation
  */


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
cCliente::cCliente(string nombre, string apellido, string DNI, string mail, string formatoticket, string OS, eFormadepago formadepago, string receta, string lista_productos_requeridos, float billetera, cCarrito carro) {

}

/**
 * @return string
 */
string cCliente::get_mail() {
    return this->mail;
}

/**
 * @return const string
 */
const string cCliente::get_DNI() {
    return this->DNI;
}

/**
 * @return void
 */
string cCliente::get_formatoticket() {
    return this->formatoticket;
}
void cCliente::set_billetera(float nuevo_monto) {
    this->billetera += nuevo_monto;
}


/**
 * @return void
 */


 /**
  * @param cMostrador n
  * @return void
  */
void cCliente::recibir_ticket(cMostrador n) {
    return;
}

/**
 * @param cCajero n
 * @return void
 */
void cCliente::recibir_bolsacompras(cCajero n) {
    return;
}
void agregar_lista_productos_requeridos();
cCarrito* cCliente::get_carro() {
    return &this->carro;
}

cCliente::~cCliente() {

}