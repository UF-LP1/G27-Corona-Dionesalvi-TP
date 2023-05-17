/**
 * Project Untitled
 */


#include "cMostrador.h"
#include "cCarrito.h"


cMostrador::cMostrador  (eDescuentos descuento) :cEmpleado(nombre, apellido, DNI) {

}

void cMostrador::ticket_saldopagar(cCliente *n) {
    float a = trabajar(n);
    cout << a << endl;
    return;
}

float cMostrador::trabajar(cCliente *a,cCarrito *c) { //aplica el descuento o no, depende 
    
    float dto = 0;
    float monto_con_dto = 0;
    float monto_sin_dto = 0;
    list<cProductos> aux = c->get_lista_productosllevados();
    
    for (list<cProductos>::iterator it_ = aux.begin(); it_ != aux.end(); it_++) {  //bucle hasta el final de la lista 
        monto_sin_dto += it_->get_precio();
    }
    
    switch (a->get_OS())
    {
    case CEMIC:
            dto = 10;
            monto_con_dto = monto_sin_dto * 0.1;
    case SWISSMEDICAL:
            dto = 15;
            monto_con_dto = monto_sin_dto * 0.15;
    case GALENO:
            dto = 30;
            monto_con_dto = monto_sin_dto * 0.3;
    case OSDE:
            dto = 25;
            monto_con_dto = monto_sin_dto * 0.25;
        default: 
            monto_con_dto = monto_sin_dto;
                break;
    }

    return monto_con_dto; 
}

cMostrador::~cMostrador() {

}