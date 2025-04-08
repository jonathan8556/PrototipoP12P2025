//Jonathan samuel GOnzalez 9959-23-3184
#ifndef INDUSTRIA_H
#define INDUSTRIA_H

#include <string>

class Industria {
private:
    std::string nombre;
    float ventas[5][4]; // 5 empresas x 4 años (2015-2018)
    float maxVenta;
    float minVenta;
    float promedioVenta;

public:
    Industria(std::string nombre); // Constructor
    void generarVentasAleatorias();
    void calcularEstadisticas();
    void mostrarDetalles();

    // Getters
    std::string getNombre();
    float getMaxVenta();
    float getMinVenta();
    float getPromedioVenta();
};

#endif
