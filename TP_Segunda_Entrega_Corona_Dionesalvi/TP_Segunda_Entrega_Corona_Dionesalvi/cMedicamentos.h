/**
 * Project Untitled
 */


#ifndef _CMEDICAMENTOS_H
#define _CMEDICAMENTOS_H

#include "cProductos.h"


class cMedicamentos : public cProductos {
public:


    cMedicamentos(string fecha_venc, string marca, int cant_dosis, string ID, float precio, int stock, string nombre);

    ~cMedicamentos();

private:
    string fecha_venc;
    string marca;
    unsigned int cant_dosis;

};

#endif //_CMEDICAMENTOS_H