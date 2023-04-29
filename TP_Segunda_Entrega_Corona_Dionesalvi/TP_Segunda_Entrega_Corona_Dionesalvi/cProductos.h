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
    void set_precio(float nuevo_precio);
    float get_precio();
    string get_ID();

protected:


private:
    const string ID;
    float precio;
    unsigned int stock;
};

#endif //_CPRODUCTOS_H