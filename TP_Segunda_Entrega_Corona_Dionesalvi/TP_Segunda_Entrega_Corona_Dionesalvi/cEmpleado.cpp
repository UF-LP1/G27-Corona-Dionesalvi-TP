/**
 * Project Untitled
 */


#include "cEmpleado.h"
#include "cCliente.h"

 /**
  * cEmpleado implementation
  */


  /**
   * @param string nombre
   * @param string apellido
   * @param string DNI
   */
cEmpleado::cEmpleado(string nombre, string apellido, string DNI) :nombre(nombre), apellido(apellido), DNI(DNI) {

}

string cEmpleado::get_DNI()
{
    return this->DNI;
}

/**
 * @return string
 */

 /**
  * @return void
  */
void cEmpleado::dosificacionyrecomendacion() {
    return;
}

/**
 * @return int
 */
int cEmpleado::descuento() {
    return 0;
}

/**
 * @return void
 */
void cEmpleado::guardarcompraenbolsa() {
    return;
}

/**
 * @return void
 */
void cEmpleado::asesoraperfumeria() {
    return;
}

/**
 * @return void
 */
void cEmpleado::facturaperfumeria() {
    return;
}

/**
 * @return void
 */
void cEmpleado::asesoraortopedia() {
    return;
}

/**
 * @return void
 */


/**
 * @return void
 */
void cEmpleado::generarticket() {
    return;
}

/**
 * @param cFarmacia farmacia
 * @return void
 */
void cEmpleado::infoFarmacia(cFarmacia farmacia) {
    return;
}
virtual void recibir_cliente(cCliente *n) {

}


/**
 * @param cCliente cliente
 * @return void
 */

cEmpleado::~cEmpleado() {

}