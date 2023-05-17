/**
 * Project Untitled
 */

#include "cFarmacia.h"
#include "cCarrito.h"
#include "cProductos.h"


cCarrito::cCarrito(int cant_productos, string tipo_carrito) {
    this->cant_productos = cant_productos;
}


list<string> seleccionar_productos(cCliente *c, cFarmacia* p) { //tendria que recibir FARMCIA que es quien tiene la lista de productos totales
    list <string> aux = c->get_lista_productos_requeridos();
    list <cProductos> aux2 = p->get_lista_productos();
    list <string> lista_productos_llevados;
   
    for (list<cProductos>::iterator it_ = aux2.begin(); it_ != aux2.end(); it_++) {  //bucle hasta el final de la lista de los productos que quiere llevarse
        for (list<string>::iterator it_2 = aux.begin(); it_2 != aux.end(); it_2++)
        {
            if (*it_2 == it_->get_nombre() && it_->get_stock()> 0) //condicion donde veo si el producto requerido existe y que haya stock
            {
                lista_productos_llevados.push_front(it_->get_nombre());
            }
        }
    }
    return lista_productos_llevados;
}

cCarrito::~cCarrito() {

}