/**
 * Project Untitled
 */


#include "cProductos_Ortopedia.h"


cProductos_Ortopedia::cProductos_Ortopedia(string parte_delcuerpo, eProdOrt tipo_producto, string ID, float precio, int stock, string nombre) :cProductos(ID, precio, stock, nombre) {
	this->parte_delcuerpo = parte_delcuerpo;
	this->tipo_producto = tipo_producto;
}

cProductos_Ortopedia::~cProductos_Ortopedia() {

}