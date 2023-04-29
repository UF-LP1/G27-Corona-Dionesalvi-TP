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
void cProductos::set_precio(float nuevo_precio) {
	this->precio = nuevo_precio;
}
float cProductos::get_precio() {
	return this->precio;
}
string cProductos::get_ID() {
	return this->ID;
}
cProductos::~cProductos() {

}