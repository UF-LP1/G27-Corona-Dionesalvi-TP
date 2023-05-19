/**
 * Project Untitled
 */


#include "cPerfumeros.h"


cPerfumeros::cPerfumeros(string credencial, string nombre, string apellido, string DNI) :cEmpleado(nombre, apellido, DNI),credencial(credencial) {
   
}

float cPerfumeros::trabajar() {

    srand(time(0));
    int i = 0 + rand() % (8) + 1;


    switch (i)
    {

    case 1:
        cout << "El mejor champu es Pantene" << endl;
        break;
    case 2:
        cout << "Recomiendo el desodorante Dove" << endl;
        break;
    case 3:
        cout << "Recomiendo el jabon Dove" << endl;
        break;
    case 4:
        cout << "Recomiendo la crema corporal Dove" << endl;
        break;
    case 5:
        cout << "Recomiendo la crema facial Dove " << endl;
        break;
    case 6:
        cout << "Recomiendo el perfume Alma de Antonio Bandera" << endl;
        break;
    case 7:
        cout << "Recomiendo la base Maybelline" << endl;
        break;
    case 8:
        cout << "Llevate el bordo" << endl;
        break;

    default:
        break;
    }

    return float(i);
}


cPerfumeros::~cPerfumeros() {

}