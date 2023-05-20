/**
 * Project Untitled
 */


#ifndef _CGOLOSINAS_H
#define _CGOLOSINAS_H



#include "cProductos.h"
#include "eGol.h"


class cGolosinas : public cProductos {
public:


    cGolosinas(string fecha_venc, eGol tipo_golosina, string ID, float precio, int stock, string nombre);

    ~cGolosinas();  

private:
    string fecha_venc;
    eGol tipo_golosina;

};

#endif //_CGOLOSINAS_H