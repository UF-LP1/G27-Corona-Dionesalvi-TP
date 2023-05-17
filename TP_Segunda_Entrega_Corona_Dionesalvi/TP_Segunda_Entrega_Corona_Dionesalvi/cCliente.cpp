/**
 * Project Untitled
 */


#include "cCliente.h"


cCliente::cCliente(string nombre, string apellido, string DNI, string mail, string formatoticket, eOS OS, eFormadepago formadepago, string receta, list <string> productos_requeridos, float billetera, cCarrito *carro, eListaNecesidad necesidad):DNI(DNI) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->mail = mail;
    this->formatoticket = formatoticket;
    this->OS = OS;
    this->formadepago = formadepago;
    this->receta = receta;
    this->productos_requeridos = productos_requeridos;
    this->billetera;
    this->carro = carro;   
    this->necesidad = necesidad;
}

string cCliente::get_mail() {
    return this->mail;
}


const string cCliente::get_DNI() {
    return this->DNI;
}


string cCliente::get_formatoticket() {
    return this->formatoticket;
}
void cCliente::restar_saldo_billetera(float nuevo_monto) {
    this->billetera -= nuevo_monto;
}
eOS cCliente:: get_OS() {
    return this->OS;
}
eListaNecesidad cCliente::get_necesidad() {

    return this->necesidad;
}

list <string> cCliente::get_lista_productos_requeridos() {
    return this-> productos_requeridos;
}



cCarrito* cCliente::get_carro() {
    return this->carro;
}

cCliente::~cCliente() {

}