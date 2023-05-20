/**
 * Project Untitled
 */

#include "eListaNecesidad.h"
#include "cFarmacia.h"
#include "cOrtopedista.h"
#include "cPerfumeros.h"
#include "cFarmaceutico.h"


cFarmacia::cFarmacia(string nombre, string direccion, string horario, string ticket_recepcion, double fondos, list<cProductos> lista_productos, list<cEmpleado> lista_empleados) {
    this->nombre = nombre;
    this->direccion = direccion;
    this->horario = horario;
    this->ticket_recepcion = ticket_recepcion;
    this->fondos = fondos;
    this->lista_productos = &lista_productos;
    this->lista_empleados = lista_empleados;

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
     
        for (list<cEmpleado>::iterator it_ = lista_empleados.begin(); it_ !=lista_empleados.end(); it_++) {  //bucle hasta el final de la lista 
            cEmpleado* aux = nullptr;
            cEmpleado* aux2 = &( * it_); //accedo a un elemento tipo cEmpleado, y con el & accedo a la direc de memoria
            aux=dynamic_cast<cOrtopedista*>(aux2);
            if (aux != nullptr) {
                aux->recibir_cliente(n);
            }
        }
    case perfumeria:
        for (list<cEmpleado>::iterator it_ = lista_empleados.begin(); it_ != lista_empleados.end(); it_++) {  //bucle hasta el final de la lista 
            cEmpleado* aux = nullptr;
            cEmpleado* aux2 = &(*it_);
            aux = dynamic_cast<cPerfumeros*>(aux2);
            if (aux != nullptr) {
                aux->recibir_cliente(n);
            }
        }

    case farmacia:
        for (list<cEmpleado>::iterator it_ = lista_empleados.begin(); it_ != lista_empleados.end(); it_++) {  //bucle hasta el final de la lista 
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
list <cProductos>* cFarmacia::get_lista_productos() {

    return this->lista_productos;

}



cFarmacia::~cFarmacia() {

}