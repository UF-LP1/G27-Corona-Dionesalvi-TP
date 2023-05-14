/**
 * Project Untitled
 */


#include "cProductos.h"

 /**
  * cProductos implementation
  */


  /**
   * @param string ID
   * @param float precio
   */
cProductos::cProductos(string ID, float precio, unsigned int stock) :ID(ID), precio(precio), stock(stock) {

}

float cProductos::get_precio() {
	return this->precio;
}
string cProductos::get_ID() {
	return this->ID;
}

unsigned int cProductos::get_stock() {
	return this->stock;
}



cProductos::~cProductos() {

}
void cProductos :: agregarimpuesto(){} 

virtual bool consultar_stock(int cant_stock_necesario) {
	unsigned int n = get_stock();
	if (cant_stock_necesario <= n)
		return true;
	else
		return false;

}
virtual bool actualizar_precio(int nuevo_precio) {

}

