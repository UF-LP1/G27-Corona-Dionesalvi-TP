/**
 * Project Untitled
 */


#include "cPerfumeros.h"

 /**
  * cPerfumeros implementation
  */


  /**
   * @param string credencial
   */
cPerfumeros::cPerfumeros(string credencial, string nombre, string apellido, string DNI) :cEmpleado(nombre, apellido, DNI) {

}

/**
 * @return void
 */
void cPerfumeros::asesorar_perf() {

    srand(time(0));
    int i = 0 + rand() % (8) + 1;


    switch (i)
    {

    case 1:
        cout << "El mejor champu es Pantene" << endl;
    case 2:
        cout << "Recomiendo el desodorante Dove" << endl;
    case 3:
        cout << "Recomiendo el jabon Dove" << endl;
    case 4:
        cout << "Recomiendo la crema corporal Dove" << endl;
    case 5:
        cout << "Recomiendo la crema facial Dove " << endl;
    case 6:
        cout << "Recomiendo el perfume Alma de Antonio Bandera" << endl;
    case 7:
        cout << "Recomiendo la base Maybelline" << endl;
    case 8:
        cout << "Llevate el bordo" << endl;

    default:
        break;
    }

    return;
}

/**
 * @param cCliente info
 * @return void
 */
void cPerfumeros::contactar_cliente(cCliente info) {
    return;
}

cPerfumeros::~cPerfumeros() {

}