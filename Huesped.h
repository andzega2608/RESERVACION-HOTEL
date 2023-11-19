#include <string>
using namespace std;
class Huesped {
    private:
        string nombre;
        string apellido;
        string nacionalidad;
        int edad;
    public:
        void setNombre(string);
        void setApellido(string);
        void setNacionalidad(string);
        void setEdad(int);
        string generarNombre();
        string getNacionalidad();
        int getEdad();
};
