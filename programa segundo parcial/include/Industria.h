//Jonathan samuel Gonzalez 9959-23-3184
#ifndef INDUSTRIA_H
#define INDUSTRIA_H

#include <string>

class Industria {
private:
    std::string nombre;
    float ventas[5][4]; // 5 empresas x 4 años (2015-2018 anos)
    float maxVenta;
    float minVenta;
    float promedioVenta;

public:
    Industria(std::string nombre); // Constructor de la clase
    void generarVentasAleatorias();
    void calcularEstadisticas();
    void mostrarDetalles();

    // Getters utilizados en el programa, envio de informacion de ventas
    std::string getNombre();
    float getMaxVenta();
    float getMinVenta();
    float getPromedioVenta();
};

#endif
