#include "Habitacion.h"

class Simple : public Habitacion{
    private:
        bool hidromasaje;
    public:
        Simple();
        Simple(float, bool);
        float calcularPrecio();
};
