/**
 * Project Untitled
 */


#include "cMostrador.h"
#include "cCarrito.h"


cMostrador::cMostrador  (eDescuentos descuento, string nombre, string apellido, string DNI) :cEmpleado(nombre, apellido, DNI) {
    this->descuento = descuento;
}

void cMostrador::ticket_saldopagar() {
    float a = trabajar();
    cout << a << endl;
    return;
}

float cMostrador::trabajar() { //aplica el descuento o no, depende 
    list <string> productos_requeridos;
    cCarrito* carrito = new cCarrito(4, "mediano");
    cCliente* a = new cCliente("Manuel", "Salomon", "44323456", "manu@gmail.com", "impreso", OSDE, efectivo, "ibuprofeno", productos_requeridos, 232 , carrito , farmacia);
   
    float dto = 0;
    float monto_con_dto = 0;
    float monto_sin_dto = 0;
    list<cProductos> aux = a->get_carro()->get_lista_productosllevados();
    
    for (list<cProductos>::iterator it_ = aux.begin(); it_ != aux.end(); it_++) {  //bucle hasta el final de la lista 
        monto_sin_dto += it_->get_precio();
    }
    
    switch (a->get_OS())
    {
    case CEMIC:
            dto = 10;
            monto_con_dto = static_cast<float>(monto_sin_dto * 0.1);
    case SWISSMEDICAL:
            dto = 15;
            monto_con_dto = static_cast<float>(monto_sin_dto * 0.15);
    case GALENO:
            dto = 30;
            monto_con_dto = static_cast<float>(monto_sin_dto * 0.3);
    case OSDE:
            dto = 25;
            monto_con_dto = static_cast<float>(monto_sin_dto * 0.25);
        default: 
            monto_con_dto = monto_sin_dto;
                break;
    }

    delete carrito;
    delete a;
    return monto_con_dto; 
}

cMostrador::~cMostrador() {

}