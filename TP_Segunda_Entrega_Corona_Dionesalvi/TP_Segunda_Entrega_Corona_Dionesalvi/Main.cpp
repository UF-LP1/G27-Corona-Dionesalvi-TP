#define _CRT_SECURE_NO_WARNINGS
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

int main()
{ 
    list<cProductos> lista_productosllevados; 
    list <string> productos_requeridos;
    list<cEmpleado> lista_empleado;

    cFarmacia* farmacia = new cFarmacia("FARMALINK", "pueyrredon 5", "lunes a vienes de 8 a 21, sabados y domingos de 8 a 19", "j", ortopedia, 2, 52577, lista_productosllevados,lista_empleado ); // eListaNecesidad eNecesidad_cliente
    cCarrito* carrito = new cCarrito(2,"chico");
    cCliente* cliente = new cCliente("Federico","Morales", "44323456", "fedemorales@gmail.com", "impreso", OSDE, efectivo, "ibuprofeno", productos_requeridos, 232, carrito, farmacia);  //   //"federico", "fernandez", "40333668", "boca@gmail.com", "impreso", OSDE, "appcel", "SI", "muniequera", 2342, carrito, ortopedia);;
    cCajero* cajero = new cCajero("7821");  
    cMostrador* mostrador = new cMostrador(C_10);
    cLimpieza* limpieza = new cLimpieza("limpieza.com", "turno tarde");
    cFarmaceutico* farmaceutico = new cFarmaceutico("5643387");
    cOrtopedista* ortopedista = new cOrtopedista("rodilla", "Sol", "Bruno", "55234543"); //falta al final la lista 
    cPerfumeros* perfumeros = new cPerfumeros("42456454", "Juan", "Carlos", "423555334");
   
    cGolosinas* chupetin = new cGolosinas("23/03/2023", chupetin, "43242", 100, 150, 47);
    cProductos_Perfumeria* productosperf = new cProductos_Perfumeria("3/03/2023", jabon, "56432", 150, 30, "Dove");
    cMedicamentos* medicamentos = new cMedicamentos("23/03/2024", "Actron", 2, "312212", 1239, 30, "Ibuprofeno");
    cProductos_Ortopedia* productomuniequera = new cProductos_Ortopedia("mano", muniequeras, "674238", 1500, 45, "muniequera");

    lista_productosllevados.push_front(*productomuniequera);                  //Guardo mi producto en lista de productos llevados 

    float monto = cajero->cobrar(cliente, farmacia, mostrador);   //Llamamos a la funcion cobrar.
    printf("monto:%f", monto);//Imprimimos el monto total

    mostrador->ticket_saldopagar(cliente);

    delete(farmacia);
    delete(carrito);
    delete(cliente);
    delete(cajero);
    delete(mostrador);
    delete(limpieza);
    delete(farmaceutico);
    delete(ortopedista);
    delete(perfumeros);
    delete(chupetin);
    delete(productosperf);
    delete(medicamentos);
    delete(productomuniequera);





    
    return 0;
}


