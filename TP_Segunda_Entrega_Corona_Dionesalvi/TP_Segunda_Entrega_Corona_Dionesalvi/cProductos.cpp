/**
 * Project Untitled
 */


#include "cProductos.h"

cProductos::cProductos(string ID, float precio, unsigned int stock, string nombre) :ID(ID), precio(precio), stock(stock), nombre(nombre) {
	this->ID = ID;
	this->precio = precio;
	this->stock = stock;
	this->nombre = nombre;
}

float cProductos::get_precio() {
	return this->precio;
}
string cProductos::get_ID() {
	return this->ID;
}
int cProductos::get_stock() {
	return this->stock;
}
string cProductos::get_nombre() {
	return this->nombre;
}
bool cProductos::consultar_stock(int cant_stock_necesario) {
	int n = this->get_stock();
	if (cant_stock_necesario <= n)
		return true;
	else
		return false;
}
void cProductos::actualizar_precio(int nuevo_precio)
{
	this->precio = nuevo_precio;
}

cProductos::~cProductos() {

}