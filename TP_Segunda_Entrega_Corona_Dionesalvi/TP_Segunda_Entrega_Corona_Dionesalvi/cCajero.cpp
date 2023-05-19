/**
 * Project Untitled
 */


#include "cCajero.h"


cCajero::cCajero(string contrasenia_caja, string nombre, string apellido, string DNI):cEmpleado(nombre, apellido, DNI) {
    this->contrasenia_caja = contrasenia_caja;
};


void cCajero::entregar_bolsa(cCarrito* c) { //IMPRIME LISTA PRODUCTOS LLEVADOS
   
    
    for (list<cProductos>::iterator it_ = c->get_lista_productosllevados().begin(); it_ != c->get_lista_productosllevados().end(); it_++)
    {
        cout << &(*it_);  //preguntar si imprime maniana a fran
    }
  
}


float cCajero::trabajar() { //FUNCION OBLIGATORIA
   
    list<cProductos> lista_productosllevados;
    list <string> productos_requeridos;
    list<cEmpleado> lista_empleado;
    cCarrito* carrito = new cCarrito(2, "chico");
    cFarmacia* farmacia_ = new cFarmacia("FARMALINK", "pueyrredon 5", "lunes a vienes de 8 a 21, sabados y domingos de 8 a 19", "j", ortopedia, 2, 52577, lista_productosllevados, lista_empleado);
    cMostrador* mostrador = new cMostrador(C_10,);
    cCliente* cliente = new cCliente("Manuel", "Morales", "44323456", "fedemorales@gmail.com", "impreso", OSDE, efectivo, "ibuprofeno", productos_requeridos, 232, carrito, farmacia);
    float monto_total = mostrador->trabajar(); //monto total es el valor que devuelve mi metodo aplicar dto 

    if (monto_total <= cliente->get_billetera()) { //chequeo que tenga el dinero para pagar
        cliente->restar_saldo_billetera(monto_total);                 //le descontamos al cliente de su billetera lo que pago 
    }
    else
        cout << "No tiene saldo suficiente" << endl;

    farmacia_ -> sumar_fondos(monto_total);                      // le sumamos lo que pago el cliente a los fondos de la farmacia 

    return monto_total;                 //retornamos el monto total por pedido de la consigna 
}



cCajero::~cCajero() {

}