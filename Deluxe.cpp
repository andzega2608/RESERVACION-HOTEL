#include "Deluxe.h"
#include <string>
// Constructor vacio
Deluxe::Deluxe(){
}
// Constructor que establece el precio, jacuzzi, vista al mar, y el plan de comida
Deluxe::Deluxe(float precio, bool _jacuzzi, bool _vistaMar, string _comida) : Habitacion(precio) { //Se implementa herencia
    jacuzzi = _jacuzzi;
    vistaMar = _vistaMar;
    comida = _comida;
}
// Setter de la variable jacuzzi
void Deluxe::setJacuzzi(bool _jacuzzi){
    jacuzzi = _jacuzzi;
}
// Setter de la variable vista al mar
void Deluxe::setVistaMar(bool _vistaMar){
    vistaMar = _vistaMar;
}
// Setter de la variable comida
void Deluxe::setComida(string _comida){
    comida = _comida;
}
// Método el cual permite calcular el precio de cada habitación a partir de los requerimientos que hizo el cliente
float Deluxe::calcularPrecioTotal() {
    float costoAdicional = 0.0;
    if (jacuzzi == true) {
        costoAdicional = costoAdicional + 49.99;
    }
    if (vistaMar == true) {
        costoAdicional = costoAdicional + 24.99;
    }
    if (comida == "Buffet") {
        costoAdicional = costoAdicional + 79.49;
    }
    return getPrecio() + costoAdicional;
}
// Getter de la variable jacuzzi
bool Deluxe::getJacuzzi(){
    return jacuzzi;
}
// Getter de la variable vista al mar
bool Deluxe::getVistaMar(){
    return vistaMar;
}
// Getter de la variable comida
string Deluxe::getComida(){
    return comida;
}
