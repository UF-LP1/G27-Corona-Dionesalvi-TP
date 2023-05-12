/**
 * Project Untitled
 */


#ifndef _CGOLOSINAS_H
#define _CGOLOSINAS_H



#include "cProductos.h"
#include <string>

#include"eGol.h"



class cGolosinas : public cProductos {
public:

    /**
     * @param string fecha_venc
     * @param eGol tipo_golosina
     */

    cGolosinas(string fecha_venc, eGol tipo_golosina, string ID, float precio, int stock);

    /**
     * @param nuevo_precio_golosina
     */
    void set_precio_golosina(float nuevo_precio_golosina);

    /**
     * @param cant_stock_necesario3
     */
    unsigned int consultar_stock3(unsigned int cant_stock_necesario3);

    ~cGolosinas();
    void agregarimpuesto();  //3agrego el metodo virtual

protected:
    string fecha_venc;
    eGol tipo_golosina;



private:
    eGol golosinas;
};

#endif //_CGOLOSINAS_H