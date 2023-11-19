#include "Huesped.h"
#include <iostream>
using namespace std;

void Huesped::setNombre(string _nombre){
    nombre = _nombre;
}

void Huesped::setApellido(string _apellido){
    apellido = _apellido;
}

void Huesped::setNacionalidad(string _nacionalidad){
    nacionalidad = _nacionalidad;
}

void Huesped::setEdad (int _edad){
    edad = _edad;
}

string Huesped::generarNombre(){
    return nombre + " " + apellido;
}

string Huesped::getNacionalidad(){
    return nacionalidad;
}

int Huesped::getEdad(){
    return edad;
}
