/**
 * Project Untitled
 */


#include "cPerfumeros.h"


cPerfumeros::cPerfumeros(string credencial, string nombre, string apellido, string DNI) :cEmpleado(nombre, apellido, DNI) {

}

void cPerfumeros::trabajar() {

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


cPerfumeros::~cPerfumeros() {

}