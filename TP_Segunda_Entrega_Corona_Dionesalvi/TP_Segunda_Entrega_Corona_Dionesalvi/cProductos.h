/**
 * Project Untitled
 */


#ifndef _CPRODUCTOS_H
#define _CPRODUCTOS_H

#include <string>
using namespace std;

class cProductos {
public:
    
    cProductos(string ID, float precio, unsigned int stock, string nombre);

    float get_precio();
    bool consultar_stock(int cant_stock_necesario);
    void actualizar_precio(int nuevo_precio);
    string get_ID();
    string get_nombre();
    int get_stock();

    ~cProductos();

protected:
    const string ID;
    float precio;
    unsigned int stock;
    string nombre;
};

#endif //_CPRODUCTOS_H