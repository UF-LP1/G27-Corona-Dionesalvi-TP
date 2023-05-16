/**
 * Project Untitled
 */


#ifndef _CMEDICAMENTOS_H
#define _CMEDICAMENTOS_H

#include "cProductos.h"


class cMedicamentos : public cProductos {
public:

    /**
     * @param string fecha_venc
     * @param string marca
     * @param int cant_dosis
     */
    cMedicamentos(string fecha_venc, string marca, int cant_dosis, string ID, float precio, int stock, string nombre);

    /**
     * @param nuevo_precio_medicamento
     */
    void set_precio_medicamento();

    bool tipo_medicamento(float nuevo_precio_medicamento);

    /**
     * @param cant_stock_necesario2
     */
    unsigned int consultar_stock2(int cant_stock_necesario2);

    ~cMedicamentos();

protected:
    string fecha_venc;
    string marca;
    unsigned int cant_dosis;


};

#endif //_CMEDICAMENTOS_H