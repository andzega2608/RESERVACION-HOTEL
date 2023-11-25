#include "Simple.h"
// Constructor vacio
Simple::Simple(){
}
// Constructor para establecer precio e hidromasaje
Simple::Simple(float precio, bool _hidromasaje) : Habitacion(precio){ // Se implementa herencia
    hidromasaje = _hidromasaje;
}
void Simple::setHidromasaje(bool _hidromasaje){
    hidromasaje = _hidromasaje;
}
// Método que sirve paraa calcular el precio de la habitacion
float Simple::calcularPrecio(){
    float aumento = 0.0;
    if (hidromasaje == true){
        aumento = aumento + 29.99;
    }
    return getPrecio() + aumento;
}
