#include "Deluxe.h"
#include <string>

Deluxe::Deluxe(){
}

Deluxe::Deluxe(float precio, bool _jacuzzi, bool _vistaMar, string _comida) : Habitacion(precio) {
    jacuzzi = _jacuzzi;
    vistaMar = _vistaMar;
    comida = _comida;
}

void Deluxe::setJacuzzi(bool _jacuzzi){
    jacuzzi = _jacuzzi;
}

void Deluxe::setVistaMar(bool _vistaMar){
    vistaMar = _vistaMar;
}

void Deluxe::setComida(string _comida){
    comida = _comida;
}

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

bool Deluxe::getJacuzzi(){
    return jacuzzi;
}

bool Deluxe::getVistaMar(){
    return vistaMar;
}

string Deluxe::getComida(){
    return comida;
}

