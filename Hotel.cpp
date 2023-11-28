#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Reserva.cpp"

using namespace std;

int main() {
     cout<<"BIENVENIDO"<<endl;
     cout<<"Por favor ingrese los siguientes datos para proceder con su reserva: "<<endl;
     string diaLlegada, diaSalida; int nHuesped; Reserva reserva1;
     cout<<"Fecha de llegada DD/MM/AA: "; cin>>diaLlegada;
     cout<<"Fecha de salida DD/MM/AA: "; cin>>diaSalida;
     cout<<"Nro. de huespedes: "; cin>>nHuesped;
     reserva1.setLlegada(diaLlegada);
     reserva1.setSalida(diaSalida);
     reserva1.setnHuesped(nHuesped);
     system("cls");
     cout<<"DATOS GUARDADOS"<<endl;
     cout<<"\nVerifique si los datos son correctos "<<endl;
     cout<<endl<<reserva1.mostrarPeriodo()<<endl;
     cout<<"Nro. Huespedes: "<<reserva1.getnHuesped()<<endl;
     int continua = 1; int opcion;
     while (continua == 1){
        cout<<"\n1. Continuar."<<endl;
        cout<<"2. Modificar datos."<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Ingrese una opcion: "; cin>>opcion;
        system("cls");
        if (opcion == 1){
            cout<<"GRACIAS POR SU CONFIRMACION"<<endl;
            continua = 0;
        }
        else {
            if (opcion == 2){
                cout<<"Fecha de llegada: "; cin>>diaLlegada;
                cout<<"Fecha de salida: "; cin>>diaSalida;
                cout<<"Nro. de huespedes: "; cin>>nHuesped;
                reserva1.setLlegada(diaLlegada);
                reserva1.setSalida(diaSalida);
                reserva1.setnHuesped(nHuesped);
                cout<<"\nVerifique si los datos son correctos "<<endl;
                cout<<endl<<reserva1.mostrarPeriodo()<<endl;
                cout<<"\nNro. Huespedes: "<<reserva1.getnHuesped()<<endl;
            }
            else {
                if (opcion == 3){
                    cout<<"RESERVA CANCELADA. HASTA LUEGO"<<endl;
                    continua = 0;
                }
                else {
                    cout<<"OPCION INVALIDA"<<endl;
                    cout<<"\nVerifique si los datos son correctos "<<endl;
                    cout<<endl<<reserva1.mostrarPeriodo()<<endl;
                    cout<<"\nNro. Huespedes: "<<reserva1.getnHuesped()<<endl;
                }
            }
        }
     }
    if (opcion != 3){
         string nombre, apellido, nacionalidad; int edad; string correo, telefono;
         cout<<"INGRESE DATOS HUESPED"<<endl;
         for (int i = 0; i < nHuesped; i++){
              cout<<"Huesped Nro. "<<i+1<<endl;
              cout<<"Nombre: "; cin>>nombre;
              cout<<"Apellido: "; cin>>apellido;
              cout<<"Nacionalidad: "; cin>>nacionalidad;
              cout<<"Edad: "; cin>>edad;
              system("cls");
              Reserva reserva1(nombre, apellido, nacionalidad, edad);
              system("cls");
              cout<<"DATO GUARDADO"<<endl;
              cout<<endl<<"Huesped Nro. "<<i+1<<endl;
              cout<<reserva1.mostrarNombre(nombre, apellido)<<endl;
              cout<<reserva1.mostrarNacionalidad(nacionalidad)<<endl;
              cout<<"Edad: "<<reserva1.obtenerEdad(edad)<<" anios"<<endl;
              continua = 1; int opcion;
              while (continua == 1){
                  cout<<"\n1. Continuar."<<endl;
                  cout<<"2. Modificar datos."<<endl;
                  cout<<"Ingrese una opcion: "; cin>>opcion;
                  system("cls");
                  if (opcion == 1){
                      cout<<"GRACIAS POR SU CONFIRMACION"<<endl;
                      continua = 0;
                  }
                  else {
                      cout<<"Huesped "<<i+1<<endl;
                      cout<<"Nombre: "; cin>>nombre;
                      cout<<"Apellido: "; cin>>apellido;
                      cout<<"Nacionalidad: "; cin>>nacionalidad;
                      cout<<"Edad: "; cin>>edad;
                      system("cls");
                      Reserva reserva1(nombre, apellido, nacionalidad, edad);
                      system("cls");
                      cout<<"DATO GUARDADO"<<endl;
                      cout<<endl<<"Huesped Nro. "<<i+1<<endl;
                      cout<<reserva1.mostrarNombre(nombre, apellido)<<endl;
                      cout<<reserva1.mostrarNacionalidad(nacionalidad)<<endl;
                      cout<<"Edad: "<<reserva1.obtenerEdad(edad)<<" anios"<<endl;
                 }
             }
         }
         cout<<"HABITACIONES"<<endl;
         int ndeluxe, nsimple; int num = 0; float precioTotal; string tecla;
         cout<<"Cuantas habitaciones Deluxe requiere: "; cin>>ndeluxe;
         cout<<"Cuantas habitaciones Simple requiere: "; cin>>nsimple;
         system("cls");
         if (ndeluxe > 0){
             bool jacuzzi, vistaMar; string comida;
             cout<<"HABITACIONES DELUXE"<<endl;
             for (int i = 0; i < ndeluxe; i++){
                 cout<<endl<<"Habitacion Nro. "<<i+1<<endl;
                 cout<<"Jacuzzi (1/0): "; cin>>jacuzzi;
                 cout<<"Vista al Mar (1/0): "; cin>>vistaMar;
                 cout<<"Comida (Buffet/Simple): "; cin>>comida;
                 Reserva reserva1(700.0, jacuzzi, vistaMar, comida);
                 cout<<"Precio total de la habitacion: $"<<reserva1.calcularPrecioDeluxe(700.0, jacuzzi, vistaMar, comida)<<endl;
                 cout<<"Su numero de habitacion asignado es: "<<reserva1.numHabitacionDeluxe()+ num<<endl;
                 precioTotal = precioTotal + reserva1.calcularPrecioDeluxe(700.0, jacuzzi, vistaMar, comida);
                 cout<<"Presione cualquier tecla para continuar: "; cin>>tecla;
             }
         }
         system("cls");
         if (nsimple > 0){
             bool hidromasaje;
             cout<<"HABITACIONES SIMPLE"<<endl;
             for (int i = 0; i < nsimple; i++){
                  cout<<endl<<"Habitacion Nro. "<<i+1<<endl;
                  cout<<"Hidromasaje (1/0): "; cin>>hidromasaje;
                  Reserva reserva1(500.0, hidromasaje);
                  cout<<"Precio total de la habitacion: $"<<reserva1.calcularPrecioSimple(500.0, hidromasaje)<<endl;
                  cout<<"Su numero de habitacion asignado es: "<<reserva1.numHabitacionSimple() + num<<endl;
                  cout<<"Presione cualquier tecla para continuar: "; cin>>tecla;
                  precioTotal = precioTotal + reserva1.calcularPrecioSimple(500.0, hidromasaje);
                  num = num + 1;
             }
         }
         system("cls");
         cout<<endl<<"PARA FINALIZAR POR FAVOR INTRODUZCA LOS DATOS DE CONTACTO"<<endl;
         cout<<"Correo electronico: "; cin>>correo;
         cout<<"Numero telefonico: "; cin>>telefono;
         system("cls");
         cout<<"DATOS DE CONTACTO"<<endl;
         Reserva reserva2(correo, telefono);
         cout<<reserva2.mostrarCorreo(correo)<<endl;
         cout<<reserva2.mostrarTelefono(telefono)<<endl;
         cout<<endl<<"MUCHAS GRACIAS. SU RESERVA HA SIDO REALIZADA"<<endl;
         cout<<"Nro Habitaciones: "<<ndeluxe+nsimple<<endl;
         cout<<"Precio total: $"<<precioTotal<<endl;
         cout<<"CODIGO DE RESERVA: "<<reserva1.getCodigo()<<endl;
         cout<<"GRACIAS POR HABER CONFIADO EN NOSOTROS. LOS ESPERAMOS!!!"<<endl;
         }
    return 0;
}
