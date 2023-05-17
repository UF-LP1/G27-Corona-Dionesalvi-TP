/**
 * Project Untitled
 */

#include "eListaNecesidad.h"
#include "cFarmacia.h"
#include "cOrtopedista.h"
#include "cPerfumeros.h"
#include "cFarmaceutico.h"


cFarmacia::cFarmacia(string nombre, string direccion, string horario, string ticket_recepcion, eListaNecesidad eNecesidad_cliente, int turno, double fondos, list<cProductos> lista_productos, list<cEmpleado> lista_empleado) {

}


void cFarmacia::set_horario(string nuevo_horario) {  //string cFarmacia:: set_horario(string nuevo_horario) estaba asi
    this->horario = nuevo_horario;
}
void cFarmacia::sumar_fondos(double fondo_actualizado) {
    this->fondos = fondo_actualizado;
}
bool cFarmacia::derivar_cliente(cCliente *n) {
    eListaNecesidad a = n->get_necesidad();
    switch (a) // deriva al empleado correspondiente segun la necesidad declarada x el cliente
    {
    case ortopedia:
     
        for (list<cEmpleado>::iterator it_ = lista_empleado.begin(); it_ !=lista_empleado.end(); it_++) {  //bucle hasta el final de la lista 
            cEmpleado* aux = nullptr;
            cEmpleado* aux2 = &( * it_); //accedo a un elemento tipo cEmpleado, y con el & accedo a la direc de memoria
            aux=dynamic_cast<cOrtopedista*>(aux2);
            if (aux != nullptr) {
                aux->recibir_cliente(n);
            }
        }
    case perfumeria:
        for (list<cEmpleado>::iterator it_ = lista_empleado.begin(); it_ != lista_empleado.end(); it_++) {  //bucle hasta el final de la lista 
            cEmpleado* aux = nullptr;
            cEmpleado* aux2 = &(*it_);
            aux = dynamic_cast<cPerfumeros*>(aux2);
            if (aux != nullptr) {
                aux->recibir_cliente(n);
            }
        }

    case farmacia:
        for (list<cEmpleado>::iterator it_ = lista_empleado.begin(); it_ != lista_empleado.end(); it_++) {  //bucle hasta el final de la lista 
            cEmpleado* aux = nullptr;
            cEmpleado* aux2 = &(*it_);
            aux = dynamic_cast<cFarmaceutico*>(aux2);
            if (aux != nullptr) {
                aux->recibir_cliente(n);
            }
        }

    default:
        break;
    }


}
list <cProductos> get_lista_productos() {

    return this-> lista_productos;

}



cFarmacia::~cFarmacia() {

}