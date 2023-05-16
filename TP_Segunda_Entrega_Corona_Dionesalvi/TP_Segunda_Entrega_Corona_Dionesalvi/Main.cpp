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

int main()
{ 
    list<cProductos> lista_productosllevados;
    cProductos_Ortopedia* productomuniequera = new cProductos_Ortopedia("mano", muniequeras, 3422, 1500, 45);  //Creo un producto, con su ID, precio y stock.
    
    lista_productosllevados.push_front(*productomuniequera);                  //Guardo mi producto en lista de productos llevados 
    
    cCarrito* carrito = new cCarrito(2,"chico",lista_productosllevados);
    cCliente* cliente = new cCliente("federico", "fernandez", "40333668", "boca@gmail.com", "impreso", "OSDE","appcel", "SI", "muniequera", 5000, carrito);
    cCajero* cajero = new cCajero("7821");  
    cMostrador* mostrador = new cMostrador("descuentos");
    cLimpieza* limpieza = new cLimpieza("limpieza.com", "turno tarde");
    cFarmaceutico* farmaceutico = new cFarmaceutico("5643387");
    cGolosinas* chupetin = new cGolosinas("23.12.2023", "chupetin");
    cOrtopedista* ortopedista = new cOrtopedista("rodilla", "Sol", "Bruno", "55234543"); //falta al final la lista 
    cPerfumeros* perfumeros = new cPerfumeros("42456454", "Juan", "Carlos", "423555334");
    cProductos_Perfumeria* productosperf = new cProductos_Perfumeria("3/4/2024", "jabon");


    cFarmacia* farmacia = new cFarmacia("FARMALINK", "pueyrredon 5", "lunes a vienes de 8 a 21 y sabados y domingos de 8 a 19", "j", ortopedia, 2, 52577, lista_productosllevados); // eListaNecesidad eNecesidad_cliente
    float monto = cajero->cobrar(cliente, farmacia);   //Llamamos a la funcion cobrar.
    printf("monto:%f", monto);//Imprimimos el monto total

    mostrador->ticket_saldopagar(cliente);

    delete(cCarrito);
    delete(cliente);
    delete(cajero);
    delete(mostrador);

    return 0;
}


