//Jonathan Samuel Gonzalez 9959-23-3184
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
    calcularEstadisticas(); //metodo calculadora de la estadistica
}

void Industria::calcularEstadisticas() {
    maxVenta = ventas[0][0];
    minVenta = ventas[0][0];
    float suma = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            suma += ventas[i][j];
            if (ventas[i][j] > maxVenta) maxVenta = ventas[i][j];
            if (ventas[i][j] < minVenta) minVenta = ventas[i][j];
        }
    }

    promedioVenta = suma / (5 * 4);
}

void Industria::mostrarDetalles() {
    std::cout << "\nIndustria: " << nombre << "\n";
    std::cout << "Ventas por empresa (2015-2018):\n";
    // Encabezados de años
    std::cout << std::setw(15) << "Empresa"
              << std::setw(15) << "2015"
              << std::setw(15) << "2016"
              << std::setw(15) << "2017"
              << std::setw(15) << "2018" << "\n";

    for (int i = 0; i < 5; i++) {
        std::cout << std::setw(15) << ("Empresa " + std::to_string(i + 1));
        for (int j = 0; j < 4; j++) {
            std::cout << std::setw(15) << std::fixed << std::setprecision(2) << ventas[i][j];
        }
        std::cout << "\n";
    }

    std::cout << "\nEstadísticas:\n";
    std::cout << std::setw(15) << "Máximo:" << "Q" << std::setw(12) << maxVenta << "\n"
              << std::setw(15) << "Mínimo:" << "Q" << std::setw(12) << minVenta << "\n"
              << std::setw(15) << "Promedio:" << "Q" << std::setw(12) << promedioVenta << "\n";
}

// Getters utilizados
std::string Industria::getNombre() { return nombre; }
float Industria::getMaxVenta() { return maxVenta; }
float Industria::getMinVenta() { return minVenta; }
float Industria::getPromedioVenta() { return promedioVenta; }
