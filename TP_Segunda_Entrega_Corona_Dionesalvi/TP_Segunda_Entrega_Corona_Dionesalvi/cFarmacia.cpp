/**
 * Project Untitled
 */


#include "cFarmacia.h"

 /**
  * cFarmacia implementation
  */


void cFarmacia::Operation1() {

}

/**
 * @param string nombre
 * @param string direccion
 * @param string horario
 * @param string ticket_recepcion
 * @param eNecesidad_cliente
 * @param int turno
 */
cFarmacia::cFarmacia(string nombre, string direccion, string horario, string ticket_recepcion, eListaNecesidad eNecesidad_cliente, int turno, double fondos) {

}

/**
 * @param nuevo_horario
 * @return string
 */
void cFarmacia::set_horario(string nuevo_horario) {  //string cFarmacia:: set_horario(string nuevo_horario) estaba asi
    this->horario = nuevo_horario;
}
void cFarmacia::set_fondos(double fondo_actualizado) {
    this->fondos = fondo_actualizado;
}

void cFarmacia::set_fondos(double fondo_actualizado) {
    this->fondos += fondo_actualizado;
}
double

/**
* @param turno_asignado
* @return int
*/
int cFarmacia::asignaturno(int turno_asignado) {
    return 0;
}

cFarmacia::~cFarmacia() {

}