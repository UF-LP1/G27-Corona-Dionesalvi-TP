/**
 * Project Untitled
 */


#include "cProductos_Perfumeria.h"

 
cProductos_Perfumeria::cProductos_Perfumeria(string fecha_venc, eProdCosmyPerf tipo_producto, string ID, float precio, int stock, string nombre) :cProductos(ID, precio, stock, nombre) {

}

cProductos_Perfumeria::~cProductos_Perfumeria() {

}