/*La clase Huesped, es una clase de composición de la clase Reserva. Mediante esta clase, se pueden ingresar los datos
de los huespedes que ocuparan las habitaciones, los datos que se piden son: nombre, apellido, nacionalidad y edad.
*/
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
