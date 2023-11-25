/*En comparación con la habitación Deluxe, la habitación Simple es un cuarto sencillo, el cual solo dispone de los elementos más
básicos para que el huesped puede tener un descanso reparador. Sin embargo, es importante mencionar que también el cliente puede
personalizar su haabitación con el tipo de ducha que desea, como ser hidromasaje o no.*/
#include "Habitacion.h"
class Simple : public Habitacion{
    private:
        bool hidromasaje;
    public:
        Simple();
        Simple(float, bool);
        void setHidromasaje(bool);
        float calcularPrecio();
};
