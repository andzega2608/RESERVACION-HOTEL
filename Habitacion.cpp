#include "Habitacion.h"
#include <cstdlib> //Libreria para poder generar numeros aleatorios
#include <ctime> //Libreria para poder generar numeros aleatorios
#include <iostream>
//Constructor vacio
Habitacion::Habitacion() {
}
//Constructor que establece el precio de la habitacion y generar un numero al azar para el numero de habitacion
Habitacion::Habitacion(float _precio) {
    precio = _precio;
}
// Setter para variable precio
void Habitacion::setPrecio(float _precio){
    precio = _precio;
}
// Getter para variable precio
float Habitacion::getPrecio() {
    return precio;
}
// Getter para variable habitacion
int Habitacion::getNumHabitacion() {
    srand(time(NULL));
    numHabitacion = rand() % 900 + 100; //generamos numero de habitacion al azar
    return numHabitacion;
}
