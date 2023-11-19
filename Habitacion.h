class Habitacion {
    private:
        float precio;
        int numHabitacion;

    public:
        Habitacion();
        Habitacion(float _precio);
        void setPrecio(float);
        float getPrecio();
        int getNumHabitacion();
};
