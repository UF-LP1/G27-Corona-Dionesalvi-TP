/**
 * Project Untitled
 */


#include "cMedicamentos.h"

cMedicamentos::cMedicamentos(string fecha_venc, string marca, int cant_dosis, string ID, float precio, int stock, string nombre) :cProductos(ID, precio, stock, nombre) {

}

cMedicamentos::~cMedicamentos() {

}