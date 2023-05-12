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
    void set_precio(float nuevo_precio);
    float get_precio();
    virtual int consultar_stock();
    virtual int actualizar_precio();
    string get_ID();


protected:


private:
    const string ID;
    float precio;
    unsigned int stock;
};

#endif //_CPRODUCTOS_H