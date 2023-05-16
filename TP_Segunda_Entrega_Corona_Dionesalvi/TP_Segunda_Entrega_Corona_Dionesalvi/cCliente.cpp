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
cCliente::cCliente(string nombre, string apellido, string DNI, string mail, string formatoticket, string OS, eFormadepago formadepago, string receta, list <string> productos_requeridos, float billetera, cCarrito carro, eListaNecesidad necesidad) {

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
void cCliente::restar_saldo_billetera(float nuevo_monto) {
    this->billetera -= nuevo_monto;
}
eOS cCliente:: get_OS() {
    return this->OS;
}
eListaNecesidad cCliente::get_necesidad() {

    return this->necesidad;
}

list <string> cCliente::get_lista_productos_requeridos() {
    return this-> productos_requeridos;
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