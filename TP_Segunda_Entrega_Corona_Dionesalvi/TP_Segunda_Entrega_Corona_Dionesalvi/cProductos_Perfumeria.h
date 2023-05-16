/**
 * Project Untitled
 */


#ifndef _CPRODUCTOS_PERFUMERIA_H
#define _CPRODUCTOS_PERFUMERIA_H

#include "cProductos.h"
#include"eProdCosmyPerf.h"




class cProductos_Perfumeria : public cProductos {
public:

    /**
     * @param string fecha_venc
     * @param eProdCosmyPerf tipo_producto
     */
    cProductos_Perfumeria(string fecha_venc, eProdCosmyPerf tipo_producto, string ID, float precio, int stock, string nombre);

    string get_PerfID();

    float get_Perfprecio();

    void set_Perfprecio(float nuevo_precioperf);

    /**
     * @param nuevo_precioperf
     */
    void set_precio_perf(float nuevo_precioperf);

    /**
     * @param cant_stock_necesario
     */
    unsigned int consultar_stock(int cant_stock_necesario);

    ~cProductos_Perfumeria();

protected:
    string fecha_venc;
    eProdCosmyPerf tipo_producto;


private:
    eProdCosmyPerf prod_perf;
};

#endif //_CPRODUCTOS_PERFUMERIA_H