/**
 * Project Untitled
 */


#include "cMostrador.h"
#include "cCarrito.h"

 /**
  * cMostrador implementation
  */


  /**
   * @param string diadedescuento
   */
cMostrador::cMostrador  (eDescuentos descuento) :cEmpleado(nombre, apellido, DNI) {

}

/**
 * @return void
 */


void cMostrador::ticket_saldopagar(cCliente *n) {
    float a = aplicar_descuento(n);
    cout << a << endl;
    return;
}

/**
 * @return void
 */
float cMostrador::aplicar_descuento(cCliente *n) {
    float dto = 0;
    float monto_con_dto = 0;
    float monto_sin_dto = 0;
    list<cProductos> aux = n->get_carro() -> get_lista_productosllevados();
    eOS a = n->get_OS();
    
    for (list<cProductos>::iterator it_ = aux.begin(); it_ != aux.end(); it_++) {  //bucle hasta el final de la lista 
        monto_sin_dto += it_->get_precio();
    }
    
    switch (a)
    {
        case 1: a == CEMIC;
            dto = 10;
            monto_con_dto = monto_sin_dto * 0.1;
        case 2: a == SWISSMEDICAL;
            dto = 15;
            monto_con_dto = monto_sin_dto * 0.15;
        case 3: a == GALENO;
            dto = 30;
            monto_con_dto = monto_sin_dto * 0.3;
        case 4: a == OSDE;
            dto = 25;
            monto_con_dto = monto_sin_dto * 0.25;
        default: 
            monto_con_dto = monto_sin_dto;
                break;
    }

    return monto_con_dto; 
}

/**
 * @param cCliente info
 * @return void
 */
void cMostrador::contactar_cliente(cCliente info) {

}

cMostrador::~cMostrador() {

}