#include <stdlib.h>
#include <ctime>
#include <string>
#include "Reserva.h"
// Constructor vacio
Reserva::Reserva(){
}
// Constructor que establece correo y telefono
Reserva::Reserva(string correo, string telefono){
    contactoHuesped.setCorreo(correo);
    contactoHuesped.setTelefono(telefono);
}
// Constructor que establece nombre, apellido, nacionalidad y edad
Reserva::Reserva(string nombre, string apellido, string nacionalidad, int edad){
    datoHuesped.setNombre(nombre);
    datoHuesped.setApellido(apellido);
    datoHuesped.setNacionalidad(nacionalidad);
    datoHuesped.setEdad(edad);
}
Reserva::Reserva(float precio, bool jacuzzi, bool vistaMar, string comida){
    habDeluxe.setPrecio(precio);
    habDeluxe.setJacuzzi(jacuzzi);
    habDeluxe.setVistaMar(vistaMar);
    habDeluxe.setComida(comida);
}
Reserva::Reserva(float precio, bool hidromasaje){
    habSimple.setPrecio(precio);
    habSimple.setHidromasaje(hidromasaje);
}
// Getter de la variable codigo
double Reserva::getCodigo(){
    srand(time(NULL));
    codigo = rand() % (999999 - 100000 + 1) + 100000; // Se genera codigo de reserva
    return codigo;
}
// Setter del dia de llegada
void Reserva::setLlegada(string _diaLlegada){
    diaLlegada = _diaLlegada;
}
// Setter del dia de salida
void Reserva::setSalida(string _diaSalida){
    diaSalida = _diaSalida;
}
// Setter del numero de huespedes
void Reserva::setnHuesped(int _nHuesped){
    nHuesped = _nHuesped;
}
// Getter de dia de llegada
string Reserva::getLlegada(){
    return diaLlegada;
}
// Getter de dia de salida
string Reserva::getSalida(){
    return diaSalida;
}
// Getter de numero de huespedes
int Reserva::getnHuesped(){
    return nHuesped;
}
// Método que retorna el periodo de la reserva
string Reserva::mostrarPeriodo(){
    return "Periodo de reserva: " + diaLlegada + " - " + diaSalida;
}
// Método que retorna el nombre
string Reserva::mostrarNombre(string nombre, string apellido){
    return "Nombre: " + datoHuesped.generarNombre();
}
// Metodo que retonar la nacionalidad
string Reserva::mostrarNacionalidad(string nacionalidad){
    return "Nacionalidad: " + datoHuesped.getNacionalidad();
}
// Método que retirna la edad
int Reserva::obtenerEdad(int edad){
    return datoHuesped.getEdad();
}
// Metodo que retorna el correo
string Reserva::mostrarCorreo(string correo){
    return "Correo electronico: " + contactoHuesped.getCorreo();
}
// Metodo que retorna el telefono
string Reserva::mostrarTelefono(string telefono){
    return "Contacto telefonico: " + contactoHuesped.getTelefono();
}
// Metodo que retorna el precio de habitacion Deluxe
float Reserva::calcularPrecioDeluxe(float precio, bool jacuzzi, bool vistaMar, string comida){
    return habDeluxe.calcularPrecioTotal();
}
// Metodo que retorna el precio de habitacion Simple
float Reserva::calcularPrecioSimple(float precio, bool hidromasaje){
    return habSimple.calcularPrecio();
}
// Metodo que retorna el numero de habitacion Deluxe
double Reserva::numHabitacionDeluxe(){
    return habDeluxe.getNumHabitacion();
}
// Metodo que retorna el numero de habitacion Simple
double Reserva::numHabitacionSimple(){
    return habSimple.getNumHabitacion();
}
