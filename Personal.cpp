#include "Personal.h"

Personal::Personal(){
}

Personal::Personal(string _correo, string _telefono){
    correo = _correo;
    telefono = _telefono;
}

void Personal::setCorreo(string _correo){
    correo = _correo;
}

void Personal::setTelefono(string _telefono){
    telefono = _telefono;
}

string Personal::getCorreo(){
    return correo;
}

string Personal::getTelefono(){
    return telefono;
}
