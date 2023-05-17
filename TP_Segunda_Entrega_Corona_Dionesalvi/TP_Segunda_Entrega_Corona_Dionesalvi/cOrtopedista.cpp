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
    int i = 0   + rand()%(4)+1;


    switch (i)
    {
    case 1: 
        cout<<"Recomiendo cabestrillo"<<endl;
    case 2:
        cout << "Recomiendo muniequeras" << endl;
    case 3:
        cout << "Recomiendo medias de compresion" << endl;
    case 4:
        cout << "Recomiendo vendas" << endl;

    default:
        break;
    }
    
    return;
}

void cOrtopedista::contactar_cliente(cCliente info) {
    return;
}

cOrtopedista::~cOrtopedista() {

}