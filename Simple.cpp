#include "Simple.h"
Simple::Simple(){
}

Simple::Simple(float precio, bool _hidromasaje) : Habitacion(precio){
    hidromasaje = _hidromasaje;
}

float Simple::calcularPrecio(){
    float aumento = 0.0;
    if (hidromasaje == true){
        aumento = aumento + 29.99;
    }
    return getPrecio() + aumento;
}
