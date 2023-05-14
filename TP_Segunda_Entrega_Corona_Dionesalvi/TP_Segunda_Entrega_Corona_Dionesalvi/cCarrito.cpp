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
list<cProductos> cCarrito::seleccionar_productos(cCliente *c, cProductos p) { //tendria que recibir FARMCIA que es quien tiene la lista de productos totales
    list <cProductos> aux = c -> get_lista_productos_requeridos();
   
    
    for (list<cProductos>::iterator it_ = aux.begin(); it_ != aux.end(); it_++) {  //bucle hasta el final de la lista de los productos que quiere llevarse
        
        if (lista_productos_requeridos[i]); //condicion donde veo si el producto requerido existe
        
    }


    return;
}

list<cProductos> get_lista_productosllevados() {
    return get_lista_productosllevados();
}

cCarrito::~cCarrito() {

}