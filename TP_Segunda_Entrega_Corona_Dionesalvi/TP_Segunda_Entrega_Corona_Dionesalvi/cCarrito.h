/**
 * Project Untitled
 */


#ifndef _CCARRITO_H
#define _CCARRITO_H
#include"cCliente.h"
#include "cProductos.h"
#include "cCarrito.h"
#include<list>


class cCarrito {
public:

    /**
     * @param int cant_productos
     * @param string tipo_carrito
     */
    cCarrito(int cant_productos, string tipo_carrito, list<cProductos> lista_productosllevados);

    /**
     * @param cCliente cliente
     * @param cProducto producto
     */
    list<cProductos> seleccionar_productos(cCliente *c, cProductos p);
        


protected:

    ~cCarrito();
private:
    int cant_productos;
    string tipo_de_carrito;
    list<cProductos> lista_productosllevados;  // Esta lista es la de los productos que se termina llevando 
};

#endif //_CCARRITO_H