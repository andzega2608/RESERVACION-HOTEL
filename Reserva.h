/*La superclase de todo el programa, es la clase Reserva, es en esta clase que mediante la aplicacion de agregacion, composicion
y herencia, el usuario puede ingresar gran parte de los datos, como ser el día de llegada, dia de salida, datos de contacto, así
también como los datos de todos los huespedes.
*/
#include "Huesped.cpp"
#include "Personal.cpp"
#include "Habitacion.cpp"
#include "Deluxe.cpp"
#include "Simple.cpp"
#include <string>
using namespace std;

class Reserva{
    private:
        double codigo;
        string diaLlegada;
        string diaSalida;
        int nHuesped;
        Huesped datoHuesped;
        Personal contactoHuesped;
        Deluxe habDeluxe;
        Simple habSimple;
    public:
        Reserva();
        Reserva(string, string);
        Reserva(string, string, string, int);
        Reserva(string, string, string);
        Reserva(float, bool, bool, string);
        Reserva(float, bool);
        double getCodigo();
        void setLlegada(string);
        void setSalida(string);
        void setnHuesped(int);
        string getLlegada();
        string getSalida();
        int getnHuesped();
        string mostrarPeriodo();
        string mostrarNombre(string, string);
        string mostrarNacionalidad(string);
        int obtenerEdad(int);
        string mostrarCorreo(string);
        string mostrarTelefono(string);
        float calcularPrecioDeluxe(float, bool, bool, string);
        float calcularPrecioSimple(float, bool);
        double numHabitacionDeluxe();
        double numHabitacionSimple();
};
