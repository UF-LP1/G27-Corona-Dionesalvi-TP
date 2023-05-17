/**
 * Project Untitled
 */


#ifndef _CCARRITO_H
#define _CCARRITO_H
#include"cCliente.h"
#include "cProductos.h"
#include<list>
using namespace std;

class cCarrito {
public:

    cCarrito(int cant_productos, string tipo_carrito);

    
    void seleccionar_productos(cCliente* c, cFarmacia* p);
    list <string> get_lista_productosllevados();


protected:

    ~cCarrito();
private:
    int cant_productos;
    string tipo_de_carrito;
    list <string> lista_productosllevados;  // Esta lista es la de los productos que se termina llevando 
};

#endif //_CCARRITO_H