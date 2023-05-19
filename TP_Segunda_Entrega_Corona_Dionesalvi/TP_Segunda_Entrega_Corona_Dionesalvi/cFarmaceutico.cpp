

#include "cFarmaceutico.h"


cFarmaceutico::cFarmaceutico(string matricula, string nombre, string apellido, string DNI) : cEmpleado(nombre, apellido, DNI), matricula(matricula) {
    
}


float cFarmaceutico::trabajar() {

    srand(time(0));
    int i = 0 + rand() % (5) + 1;

    return static_cast<float>(i);
}


cFarmaceutico::~cFarmaceutico() {

}