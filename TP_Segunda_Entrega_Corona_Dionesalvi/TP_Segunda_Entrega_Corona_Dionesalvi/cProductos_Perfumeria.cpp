/**
 * Project Untitled
 */


#include "cProductos_Perfumeria.h"

 
cProductos_Perfumeria::cProductos_Perfumeria(string fecha_venc, eProdCosmyPerf tipo_producto, string ID, float precio, int stock, string nombre) :cProductos(ID, precio, stock, nombre) {
	this->fecha_venc = fecha_venc;
	this->tipo_producto = tipo_producto;
}

cProductos_Perfumeria::~cProductos_Perfumeria() {

}