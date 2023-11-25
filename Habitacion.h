/*La clase Habitacion es la clase padre de las clases Deluxe y Simple. Dicha clase tiene como fin heredar los atributos
precio de cada habitación, así también los métodos.
*/
#ifndef HABITACION_H // Sirve para definir la clase y no generar un error de redefinición de la clase.
#define HABITACION_H
class Habitacion {
    //Atributos de la clase. Protegidos porque se implementa herencia
    protected:
        float precio;
        int numHabitacion;
    //Métodos de la clase
    public:
        Habitacion();
        Habitacion(float _precio);
        void setPrecio(float);
        float getPrecio();
        int getNumHabitacion();
};
#endif
