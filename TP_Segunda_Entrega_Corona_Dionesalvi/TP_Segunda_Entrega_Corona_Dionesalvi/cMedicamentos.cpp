/**
 * Project Untitled
 */


#include "cMedicamentos.h"

 /**
  * cMedicamentos implementation
  */


  /**
   * @param string fecha_venc
   * @param string marca
   * @param int cant_dosis
   */
cMedicamentos::cMedicamentos(string fecha_venc, string marca, int cant_dosis, string ID, float precio, int stock, string nombre) :cProductos(ID, precio, stock, nombre) {

}

/**
 * @param nuevo_precio_medicamento
 * @return float
 */
void cMedicamentos::set_precio_medicamento(float nuevo_precio_medicamento) {
    this->precio = nuevo_precio_medicamento;
}

/**
 * @return bool
 */
bool cMedicamentos::tipo_medicamento() {
    return false;
}

/**
 * @param cant_stock_necesario2
 * @return unsigned int
 */
unsigned int cMedicamentos::consultar_stock2(int cant_stock_necesario2) {
    return 0;
}

cMedicamentos::~cMedicamentos() {

}