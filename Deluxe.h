#include "Habitacion.h"
#include <string>

class Deluxe : public Habitacion {
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
