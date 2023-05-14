/**
 * Project Untitled
 */


#ifndef _CPRODUCTOS_H
#define _CPRODUCTOS_H

#include "cFarmacia.h"

class cProductos {
public:

    /**
     * @param string ID
     * @param float precio
     */

    cProductos(string ID, float precio, unsigned int stock);


    ~cProductos();
    virtual void agregarimpuesto(); //1nuevo metodo para el virtual
    float get_precio();
    virtual bool consultar_stock(int cant_stock_necesario);
    virtual bool actualizar_precio(int nuevo_precio);
    string get_ID();
    unsigned int get_stock();

protected:


private:
    const string ID;
    float precio;
    unsigned int stock;
};

#endif //_CPRODUCTOS_H