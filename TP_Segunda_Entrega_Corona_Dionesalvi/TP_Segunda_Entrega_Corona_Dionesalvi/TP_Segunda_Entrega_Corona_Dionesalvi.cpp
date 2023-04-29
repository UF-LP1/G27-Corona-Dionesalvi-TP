#define _CRT_SECURE_NO_WARNINGS
#include "cFarmacia.h"
#include "cCarrito.h"
#include "cProductos.h"
#include "cProductos_Ortopedia.h"


int main()
{
    list<cProductos> lista_productosllevados;
    cProductos_Ortopedia* productomuniequera = new cProductos_Ortopedia("mano", muniequeras, 3422, 1500, 45);  //Creo un producto, con su ID, precio y stock.
    
    lista_productosllevados.push_front(*productomuniequera);                  //Guardo mi producto en lista de productos llevados 
    
    cCarrito* carrito = new cCarrito(2,"chico",lista_productosllevados);


    cCliente* cliente = new cCliente("federico", "fernandez", "40333668", "boca@gmail.com", "impreso", "OSDE","appcel", "SI", "muniequera", 5000, carrito);
    cCajero* cajero = new cCajero("7821");  
    cFarmacia* farmacia = new cFarmacia("FARMALINK", "pueyrredon 5", "lunes a vienes de 8 a 21 y sabados y domingos de 8 a 19", "j", ortopedia, 2, 52577, lista_productosllevados); // eListaNecesidad eNecesidad_cliente

    float monto = cajero->cobrar(cliente, farmacia);   //Llamamos a la funcion cobrar.
    printf("monto:%f", monto);                  //Imprimimos el monto total
    return 0;
}


