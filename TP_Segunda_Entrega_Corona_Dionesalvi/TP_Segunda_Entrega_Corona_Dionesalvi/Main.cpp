#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include "cFarmacia.h"
#include "cCarrito.h"
#include "cProductos_Ortopedia.h"
#include "cCajero.h"
#include "cMostrador.h"
#include "cCliente.h"
#include "cLimpieza.h"
#include "cFarmaceutico.h"
#include "cGolosinas.h"
#include "cOrtopedista.h"
#include "cPerfumeros.h"
#include "cProductos_Perfumeria.h"
#include "cMedicamentos.h"
#include <string>
using namespace std;

int main()
{ 
    list<cProductos> lista_productosllevados; 
    list <string> productos_requeridos;
    list<cEmpleado> lista_empleado; 

    cFarmacia* farmacia_ = new cFarmacia("FARMALINK", "pueyrredon 5", "lunes a vienes de 8 a 21, sabados y domingos de 8 a 19", "j", ortopedia, 2, 52577, lista_productosllevados,lista_empleado ); 
    cCarrito* carrito = new cCarrito(2,"chico");
    cCliente* cliente = new cCliente("Manuel", "Morales", "44323456", "fedemorales@gmail.com", "impreso", OSDE, efectivo, "ibuprofeno", productos_requeridos, 232 , carrito ,farmacia);
    cCajero* cajero = new cCajero("7821","Juan","Bianco","22456876");
    cMostrador* mostrador = new cMostrador(C_10,"Lucila","Ferrero","34876543");
    cLimpieza* limpieza = new cLimpieza("limpieza.com", turno_tarde,"Pablo","Bruno","23000864");
    cFarmaceutico* farmaceutico = new cFarmaceutico("5643387","Leonel","Cucchitini","23098654");
    cOrtopedista* ortopedista = new cOrtopedista("rodilla", "Sol", "Bruno", "55234543"); 
    cPerfumeros* perfumeros = new cPerfumeros("42456454", "Juan", "Carlos", "423555334");
    cGolosinas* chupetin = new cGolosinas("9/04/2023", caramelo, "43242", 150, 23, "caramelo");
    cProductos_Perfumeria* productosperf = new cProductos_Perfumeria("3/03/2023", jabon, "56432", 150, 30, "Dove");
    cMedicamentos* medicamentos = new cMedicamentos("23/03/2024", "Actron", 2, "312212", 1239, 30, "Ibuprofeno");
    cProductos_Ortopedia* productomuniequera = new cProductos_Ortopedia("mano", muniequeras, "674238", 1500, 45, "muniequera");

    lista_productosllevados.push_front(*productomuniequera);                  //Guardo mi producto en lista de productos llevados 

    float monto = cajero->trabajar();   //Llamamos a la funcion cobrar
    cout << "monto:%f" << monto<< endl;//Imprimimos el monto total

    float limpiar = limpieza->trabajar();
    for(float n = 0; n < limpiar; limpiar++ ){
            if (limpiar == 1)
                cout << "Barriendo vereda" << endl;
                break;
            if (limpiar == 2)
            cout << "Trapeando sector 1" << endl;
                break;
            if(limpiar == 3)
            cout << "Aspirando deposito" << endl;
                break;
    }

    float ort = ortopedista->trabajar();
    for (float n = 0; n < ort; ort++) {
        if (ort == 1)
            cout << "Recomiendo cabestrillo" << endl;
        break;
        if (ort == 2)
            cout << "Recomiendo muniequeras" << endl;
        break;
        if (ort == 3)
            cout << "Recomiendo medias de compresion" << endl;
        break;
        if (ort == 4)
            cout << "Recomiendo vendas" << endl;
        break;
    }


    float perf = perfumeros->trabajar();
    for (float n = 0; n < perf; perf++) {
        if (perf == 1)
            cout << "El mejor champu es Pantene" << endl;
        break;
        if (perf == 2)
            cout << "Recomiendo el desodorante Dove" << endl;
        break;
        if (perf == 3)
            cout << "Recomiendo el jabon Dove" << endl;
        break;
        if (perf == 4)
            cout << "Recomiendo la crema corporal Dove" << endl;
        break;
        if (perf == 5)
            cout << "Recomiendo la crema facial Dove" << endl;
        break;
        if (perf == 6)
            cout << "Recomiendo el perfume Alma de Antonio Bandera" << endl;
        break;
        if (perf == 7)
            cout << "Recomiendo la base Maybelline" << endl;
        break;
        if (perf == 8)
            cout << "Llevate el esmalte bordo" << endl;
        break;

    }


    float farm = farmaceutico->trabajar();
    for (float n = 0; n < farm; farm++) {
        if (farm == 1)
            cout << "Para dolores de cabeza, recomiendo Ibuprofeno" << endl;
        break;
        if (farm == 2)
            cout << "Para fuertes molestias menstruales, recomiendo Ibuevanol" << endl;
        break;
        if (farm == 3)
            cout << "Si le esta costando conciliar el sueño, recomiendo Alplax" << endl;
        break;
        if (farm == 4)
            cout << "Si ayer tomo mucho alcohol, hoy tome resaquit" << endl;
        break;
        if (farm == 5)
            cout << "Si sufre mareos cuando viaja, consuma dramamine" << endl;
        break;
    }

    mostrador->ticket_saldopagar();
    int opcion = 0;

    do
    {
        cout << "Estimada/o" << cliente->get_nombre() << "Si desea seguir comprando marque 1" << endl;
        cout << "Si compro y quiere saber su saldo a pagar marque 2" << endl;
        cout << "Si quiere abonar marque 3" << endl;
        cin >> opcion;
         
    } while (opcion != 1 || opcion != 2 || opcion != 3);
    
    switch (opcion)
    {
        case 1:
            farmacia_->derivar_cliente(cliente); //si quiere seguir comprando, se lo deriva respecto su necesidad
            break;
        case 2:
            mostrador->recibir_cliente(cliente); //si no quiere comprar mas, se lo deriva al mostrador quien le dira su saldo a pagar
        case 3:
            cajero->recibir_cliente(cliente);//si quiere pagar, se lo deriva a cajero
    }


    delete farmacia_;
    delete carrito;
    delete cliente;
    delete cajero;
    delete mostrador;
    delete limpieza;
    delete farmaceutico;
    delete ortopedista;
    delete perfumeros;
    delete chupetin;
    delete productosperf;
    delete medicamentos;
    delete productomuniequera;
    

    return 0;
}


