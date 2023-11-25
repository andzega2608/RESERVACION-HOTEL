#include "Huesped.h"
#include <iostream>
using namespace std;
// Setter de la varible nombre
void Huesped::setNombre(string _nombre){
    nombre = _nombre;
}
// Setter de la variable apellido
void Huesped::setApellido(string _apellido){
    apellido = _apellido;
}
// Setter de la variable nacionalidad
void Huesped::setNacionalidad(string _nacionalidad){
    nacionalidad = _nacionalidad;
}
// Setter de la variable edad
void Huesped::setEdad (int _edad){
    edad = _edad;
}
// Método el cual retorna el nombre completo del huesped
string Huesped::generarNombre(){
    return nombre + " " + apellido;
}
// Getter de la variable nacionalidad
string Huesped::getNacionalidad(){
    return nacionalidad;
}
// Getter de la variable edad
int Huesped::getEdad(){
    return edad;
}
