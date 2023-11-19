#include "Huesped.cpp"
#include "Personal.cpp"
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
    public:
        Reserva();
        Reserva(string, string);
        Reserva(string, string, string, int);
        Reserva(string, string, string);
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
};
