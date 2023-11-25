/*La clase Personal comparte una relación de agregación con la clase Reserva. Mediante esta clase el usuario podrá ingresar
sus datos personales de contacto como son: correo electronico y numero telefonico.
*/
#include <string>
using namespace std;
class Personal{
    private:
        string correo;
        string telefono;
    public:
        Personal();
        Personal(string, string);
        void setCorreo(string);
        void setTelefono(string);
        string getCorreo();
        string getTelefono();
};
