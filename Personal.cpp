#include "Personal.h"
// Constructor vacio
Personal::Personal(){
}
// Constructor que establece el correo y el telefono del huesped
Personal::Personal(string _correo, string _telefono){
    correo = _correo;
    telefono = _telefono;
}
// Setter de la variable correo
void Personal::setCorreo(string _correo){
    correo = _correo;
}
// Setter de la variable telefono
void Personal::setTelefono(string _telefono){
    telefono = _telefono;
}
// Getter de la vaariable correo
string Personal::getCorreo(){
    return correo;
}
// Getter de la variable telefono
string Personal::getTelefono(){
    return telefono;
}
