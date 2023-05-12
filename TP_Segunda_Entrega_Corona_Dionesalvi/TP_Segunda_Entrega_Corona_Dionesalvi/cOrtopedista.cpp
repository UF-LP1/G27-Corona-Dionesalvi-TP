/**
 * Project Untitled
 */


#include "cOrtopedista.h"

 /**
  * cOrtopedista implementation
  */


  /**
   * @param string parte_del_cuerpo
   */
cOrtopedista::cOrtopedista(string parte_del_cuerpo, string nombre, string apellido, string DNI,cProductos lista_productosORt) :cEmpleado(nombre, apellido, DNI) {

}

/**
 * @return void
 */
void cOrtopedista::consejo_articulosORT() {
    srand(time(0));
    int i = 0   + rand()%(3 +1 -0);

    cProductos recomendado = lista_productosORT.(i); // .find(i);
    cout << "tu producto recomendado es :",recomendado;
    
    return;
}

/**
 * @param cCliente info
 * @return void
 */
void cOrtopedista::contactar_cliente(cCliente info) {
    return;
}

cOrtopedista::~cOrtopedista() {

}