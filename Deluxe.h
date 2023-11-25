/*La subclase Deluxe hace referencia a uno de los dos tipos de habitaciones que el hotel dispone para sus huespedes.
La habitación es sinonimo de lujo y exclusividad. Pues, puede ser personalizada dependiendo los gustos del cliente como ser:
incluir jacuzzi, vista al mar y el plan de comidas como ser de tipo buffet.*/
#include "Habitacion.h"
#include <string>

class Deluxe : public Habitacion {  //Se implementa herencia
private:
    bool jacuzzi;
    bool vistaMar;
    string comida;

public:
    Deluxe();
    Deluxe(float, bool, bool, string);
    void setJacuzzi(bool);
    void setVistaMar(bool);
    void setComida(string);
    bool getJacuzzi();
    bool getVistaMar();
    string getComida();
    float calcularPrecioTotal();
};
