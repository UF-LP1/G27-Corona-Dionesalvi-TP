/**
 * Project Untitled
 */


#include "cCarrito.h"



 /**
  * cCarrito implementation
  */


  /**
   * @param int cant_productos
   * @param string tipo_carrito
   */
cCarrito::cCarrito(int cant_productos, string tipo_carrito, list<cProductos> lista_productosllevados) {
    this->lista_productosllevados = lista_productosllevados;
}

/**
 * @param cCliente cliente
 * @param cProducto producto
 * @return void
 */
void cCarrito::seleccionar_productos(cCliente cliente, cProductos producto) {
    return;
}

list<cProductos> get_lista_productosllevados() {
    return get_lista_productosllevados();
}

cCarrito::~cCarrito() {

}