/**
 * Project Untitled
 */


#include "cPerfumeros.h"

 /**
  * cPerfumeros implementation
  */


  /**
   * @param string credencial
   */
cPerfumeros::cPerfumeros(string credencial, string nombre, string apellido, string DNI) :cEmpleado(nombre, apellido, DNI) {

}

/**
 * @return void
 */
void cPerfumeros::asesorar_perf() {
    return;
}

/**
 * @param cCliente info
 * @return void
 */
void cPerfumeros::contactar_cliente(cCliente info) {
    return;
}

cPerfumeros::~cPerfumeros() {

}