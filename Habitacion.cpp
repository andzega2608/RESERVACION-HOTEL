#include "Habitacion.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
Habitacion::Habitacion() {
}

Habitacion::Habitacion(float _precio) {
    precio = _precio;
    srand(time(NULL));
    numHabitacion = rand() % 900 + 100; //generamos numero de habitacion al azar
}

void Habitacion::setPrecio(float _precio){
    precio = _precio;
}

float Habitacion::getPrecio() {
    return precio;
}

int Habitacion::getNumHabitacion() {
    return numHabitacion;
}
