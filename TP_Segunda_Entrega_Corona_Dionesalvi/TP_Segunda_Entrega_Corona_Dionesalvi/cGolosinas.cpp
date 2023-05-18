/**
 * Project Untitled
 */


#include "cGolosinas.h"


cGolosinas::cGolosinas(string fecha_venc, eGol tipo_golosina, string ID, float precio, int stock, string nombre) : cProductos(ID, precio, stock, nombre)  {
	this->fecha_venc = fecha_venc;
	this->tipo_golosina = tipo_golosina;
}

cGolosinas::~cGolosinas() {

}


