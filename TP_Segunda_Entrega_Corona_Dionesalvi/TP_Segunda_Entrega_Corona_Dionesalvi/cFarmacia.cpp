/**
 * Project Untitled
 */

#include "eListaNecesidad.h"
#include "cFarmacia.h"
#include "cOrtopedista.h"
#include "cPerfumeros.h"
#include "cFarmaceutico.h"

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
cFarmacia::cFarmacia(string nombre, string direccion, string horario, string ticket_recepcion, eListaNecesidad eNecesidad_cliente, int turno, double fondos, cProductos lista_productos, cEmpleado lista_empleado) {

}

/**
 * @param nuevo_horario
 * @return string
 */
void cFarmacia::set_horario(string nuevo_horario) {  //string cFarmacia:: set_horario(string nuevo_horario) estaba asi
    this->horario = nuevo_horario;
}
void cFarmacia::sumar_fondos(double fondo_actualizado) {
    this->fondos = fondo_actualizado;
}
bool cFarmacia::derivar_cliente(cCliente *n) {
    eListaNecesidad a = n->get_necesidad();

   // cOrtopedista* ortopedista = new cOrtopedista("tobillo");
   //cPerfumeros* perfumero = new cPerfumeros("453326");
   //cFarmaceutico* farmaceutico = new cFarmaceutico("235772");
    switch (a)
    {
    case 1: a == ortopedia;
       

        for (list<cEmpleado>::iterator it_ = lista_empleado.begin(); it_ !=lista_empleado.end(); it_++) {  //bucle hasta el final de la lista 
            cOrtopedista* aux = nullptr;
            aux=dynamic_cast<cOrtopedista*>(lista_empleado);
            if()
        }
    case 2: a == perfumeria;

    case 3: a == farmacia;


    default:
        break;
    }


}

/**
* @param turno_asignado
* @return int
*/
int cFarmacia::asignaturno(int turno_asignado) {
    return 0;
}

cFarmacia::~cFarmacia() {

}