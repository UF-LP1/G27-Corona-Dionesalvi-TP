/**
 * Project Untitled
 */


#include "cOrtopedista.h"


cOrtopedista::cOrtopedista(string parte_del_cuerpo, string nombre, string apellido, string DNI) :cEmpleado(nombre, apellido, DNI) {
    this->parte_del_cuerpo = parte_del_cuerpo;
}

void cOrtopedista::trabajar() {
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



cOrtopedista::~cOrtopedista() {

}