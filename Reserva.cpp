#include <stdlib.h>
#include <ctime>
#include <string>
#include "Reserva.h"

Reserva::Reserva(){
}

Reserva::Reserva(string correo, string telefono){
    contactoHuesped.setCorreo(correo);
    contactoHuesped.setTelefono(telefono);
}
Reserva::Reserva(string nombre, string apellido, string nacionalidad, int edad){
    datoHuesped.setNombre(nombre);
    datoHuesped.setApellido(apellido);
    datoHuesped.setNacionalidad(nacionalidad);
    datoHuesped.setEdad(edad);

}

double Reserva::getCodigo(){
    srand(time(NULL));
    codigo = rand() % (999999 - 100000 + 1) + 100000;
    return codigo;
}

void Reserva::setLlegada(string _diaLlegada){
    diaLlegada = _diaLlegada;
}

void Reserva::setSalida(string _diaSalida){
    diaSalida = _diaSalida;
}

void Reserva::setnHuesped(int _nHuesped){
    nHuesped = _nHuesped;
}

string Reserva::getLlegada(){
    return diaLlegada;
}

string Reserva::getSalida(){
    return diaSalida;
}

int Reserva::getnHuesped(){
    return nHuesped;
}

string Reserva::mostrarPeriodo(){
    return "Periodo de reserva: " + diaLlegada + " - " + diaSalida;
}

string Reserva::mostrarNombre(string nombre, string apellido){
    return "Nombre: " + datoHuesped.generarNombre();
}

string Reserva::mostrarNacionalidad(string nacionalidad){
    return "Nacionalidad: " + datoHuesped.getNacionalidad();
}

int Reserva::obtenerEdad(int edad){
    return datoHuesped.getEdad();
}

string Reserva::mostrarCorreo(string correo){
    return "Correo electronico: " + contactoHuesped.getCorreo();
}

string Reserva::mostrarTelefono(string telefono){
    return "Contacto telefonico: " + contactoHuesped.getTelefono();
}
