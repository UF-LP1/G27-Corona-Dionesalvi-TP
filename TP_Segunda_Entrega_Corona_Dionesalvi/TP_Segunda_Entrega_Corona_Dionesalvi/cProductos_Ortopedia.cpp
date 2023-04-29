/**
 * Project Untitled
 */


#include "cProductos_Ortopedia.h"
#include "eProdOrt.h"
 /**
  * cProductos_Ortopedia implementation
  */


  /**
   * @param string parte_delcuerpo
   * @param eProdOrt tipo_producto
   */
cProductos_Ortopedia::cProductos_Ortopedia(string parte_delcuerpo, eProdOrt tipo_producto, string ID, float precio, int stock) :cProductos(ID, precio, stock) {

}

/**
 * @return string
 */
string cProductos_Ortopedia::get_ortoID() {
    return this->get_ID();
}

/**
 * @return float
 */
float cProductos_Ortopedia::get_ortoprecio() {
    return this->get_precio();
}

/**
 * @return float
 */


 /**
  * @param nuevo_precioort
  * @return float
  */
void cProductos_Ortopedia::set_precio_ort(float nuevo_precioort) {
    this->precio = nuevo_precioort;
}

/**
 * @param cant_stock_necesario1
 * @return unsigned int
 */
unsigned int cProductos_Ortopedia::consultar_stock1(int cant_stock_necesario1) {
    return 0;
}

cProductos_Ortopedia::~cProductos_Ortopedia() {

}