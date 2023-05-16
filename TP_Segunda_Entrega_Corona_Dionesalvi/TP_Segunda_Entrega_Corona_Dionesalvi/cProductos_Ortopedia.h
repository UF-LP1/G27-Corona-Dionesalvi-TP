/**
 * Project Untitled
 */


#ifndef _CPRODUCTOS_ORTOPEDIA_H
#define _CPRODUCTOS_ORTOPEDIA_H

#include "cProductos.h"
#include "eProdOrt.h"



class cProductos_Ortopedia : public cProductos {
public:

    /**
     * @param string parte_delcuerpo
     * @param eProdOrt tipo_producto
     */
    cProductos_Ortopedia(string parte_delcuerpo, eProdOrt tipo_producto, string ID, float precio, int stock, string nombre);

    string get_ortoID();

    /**
     * @param nuevo_precioort
     */
    void set_precio_ort(float nuevo_precioort);
    float get_ortoprecio();

    /**
     * @param cant_stock_necesario1
     */
    unsigned int consultar_stock1(int cant_stock_necesario1);

    ~cProductos_Ortopedia();

protected:
    string parte_delcuerpo;
    eProdOrt tipo_producto;


private:
    eProdOrt prod_ort;
};

#endif //_CPRODUCTOS_ORTOPEDIA_H