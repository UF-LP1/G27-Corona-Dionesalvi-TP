/**
 * Project Untitled
 */


#ifndef _CPRODUCTOS_ORTOPEDIA_H
#define _CPRODUCTOS_ORTOPEDIA_H

#include "cProductos.h"
#include "eProdOrt.h"



class cProductos_Ortopedia : public cProductos {
public:

   
    cProductos_Ortopedia(string parte_delcuerpo, eProdOrt tipo_producto, string ID, float precio, int stock, string nombre);


    ~cProductos_Ortopedia();

protected:
    string parte_delcuerpo;
    eProdOrt tipo_producto;


private:
    eProdOrt prod_ort;
};

#endif //_CPRODUCTOS_ORTOPEDIA_H