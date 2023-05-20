/**
 * Project Untitled
 */


#ifndef _CPRODUCTOS_PERFUMERIA_H
#define _CPRODUCTOS_PERFUMERIA_H

#include "cProductos.h"
#include"eProdCosmyPerf.h"


class cProductos_Perfumeria : public cProductos {
public:

 
    cProductos_Perfumeria(string fecha_venc, eProdCosmyPerf tipo_producto, string ID, float precio, int stock, string nombre);

    ~cProductos_Perfumeria();

private:
    string fecha_venc;
    eProdCosmyPerf tipo_producto;

};

#endif //_CPRODUCTOS_PERFUMERIA_H