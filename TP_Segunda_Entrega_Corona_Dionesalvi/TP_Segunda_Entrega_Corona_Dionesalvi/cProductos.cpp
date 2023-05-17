/**
 * Project Untitled
 */


#include "cProductos.h"

 
cProductos::cProductos(string ID, float precio, unsigned int stock, string nombre) :ID(ID), precio(precio), stock(stock), nombre(nombre) {

}

float cProductos::get_precio() {
	return this->precio;
}
bool cProductos::actualizar_precio(int nuevo_precio)
{
	return false;
}
string cProductos::get_ID() {
	return this->ID;
}

unsigned int cProductos::get_stock() {
	return this->stock;
}
string cProductos::get_nombre() {
	return this->nombre;
}


cProductos::~cProductos() {

}

bool cProductos::consultar_stock(int cant_stock_necesario) {
	int* n = ();
	if (cant_stock_necesario <= n)
		return true;
	else
		return false;

}

