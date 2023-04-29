/**
 * Project Untitled
 */


#include "cProductos_Perfumeria.h"

 /**
  * cProductos_Perfumeria implementation
  */


  /**
   * @param string fecha_venc
   * @param eProdCosmyPerf tipo_producto
   */
cProductos_Perfumeria::cProductos_Perfumeria(string fecha_venc, eProdCosmyPerf tipo_producto, string ID, float precio, int stock) :cProductos(ID, precio, stock) {

}

/**
 * @return string
 */
string cProductos_Perfumeria::get_PerfID() {
    return this->get_ID();
}

/**
 * @return float
 */
float cProductos_Perfumeria::get_Perfprecio() {
    return this->get_precio();

}

/**
 * @return float
 */
void cProductos_Perfumeria::set_Perfprecio(float nuevo_precioperf) {
    this->precio = nuevo_precioperf;
}

/**
 * @param nuevo_precioperf
 * @return float
 */
void cProductos_Perfumeria::set_precio_perf(float nuevo_precioperf) {
    return;
}

/**
 * @param cant_stock_necesario
 * @return unsigned int
 */
unsigned int cProductos_Perfumeria::consultar_stock(int cant_stock_necesario) {
    return 0;
}

cProductos_Perfumeria::~cProductos_Perfumeria() {

}