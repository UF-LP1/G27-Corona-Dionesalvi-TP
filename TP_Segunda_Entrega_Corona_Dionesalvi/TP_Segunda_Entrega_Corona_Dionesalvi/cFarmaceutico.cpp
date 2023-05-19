

#include "cFarmaceutico.h"


cFarmaceutico::cFarmaceutico(string matricula, string nombre, string apellido, string DNI) : cEmpleado(nombre, apellido, DNI), matricula(matricula) {
    
}


float cFarmaceutico::trabajar() {

    srand(time(0));
    int i = 0 + rand() % (5) + 1;


    switch (i)
    {

    case 1:
        cout << "Para dolores de cabeza, recomiendo Ibuprofeno" << endl;
        break;
    case 2:
        cout << "Para fuertes molestias menstruales, recomiendo Ibuevanol" << endl;
        break;
    case 3:
        cout << "Si le esta costando conciliar el sueño, recomiendo Alplax" << endl;
        break;
    case 4:
        cout << "Si ayer tomo mucho alcohol, hoy tome resaquit" << endl;
        break;
    case 5:
        cout << "Si sufre mareos cuando viaja, consuma dramamine" << endl;
        break;

    default:
        break;
    }

    return 0.0;
}


cFarmaceutico::~cFarmaceutico() {

}