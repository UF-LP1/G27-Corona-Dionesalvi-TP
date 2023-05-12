/**
 * Project Untitled
 */


#include "cGolosinas.h"


 /**
  * cGolosinas implementation
  */


  /**
   * @param string fecha_venc
   * @param eGol tipo_golosina
   */
cGolosinas::cGolosinas(string fecha_venc, eGol tipo_golosina, string ID, float precio, int stock) : cProductos(ID, precio, stock) {

}

/**
 * @param nuevo_precio_golosina
 * @return float
 */
void cGolosinas::set_precio_golosina(float nuevo_precio_golosina) {
    this->precio = nuevo_precio_golosina;
}

/**
 * @param cant_stock_necesario3
 * @return unsigned int
 */
unsigned int cGolosinas::consultar_stock3(unsigned int cant_stock_necesario3) {
    return 0;
}

cGolosinas::~cGolosinas() {

}

void cGolosinas::agregarimpuesto()
{
    
}
