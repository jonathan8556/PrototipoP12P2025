#include "Industria.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

Industria::Industria(std::string nombre) : nombre(nombre) {
    srand(time(0)); // Inicializar semilla para rand()
}

void Industria::generarVentasAleatorias() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            ventas[i][j] = rand() % 1000000 + 1; // Monto entre 1 y 1,000,000
        }
    }
    calcularEstadisticas();
}


