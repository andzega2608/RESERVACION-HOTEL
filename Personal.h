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
