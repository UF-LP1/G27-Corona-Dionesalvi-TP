/**
 * Project Untitled
 */


#include "cProductos_Ortopedia.h"
#include "eProdOrt.h"

cProductos_Ortopedia::cProductos_Ortopedia(string parte_delcuerpo, eProdOrt tipo_producto, string ID, float precio, int stock, string nombre) :cProductos(ID, precio, stock, nombre) {

}

cProductos_Ortopedia::~cProductos_Ortopedia() {

}