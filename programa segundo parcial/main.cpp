//Jonathan Samuel GOnzalez 9959-23-3184
#include <iostream>
#include "Industria.h"

int main() {
    Industria industrias[3] = {
        Industria("Camara de Industria"),
        Industria("Camara de la Construccion"),
        Industria("Camara de Transporte")
    };

    char opcion;
    do {
        // Generar y mostrar datos para cada industria utilizada
        for (int i = 0; i < 3; i++) {
            industrias[i].generarVentasAleatorias();
            industrias[i].mostrarDetalles();
        }

        // Calcular la mejor industria de todos
        float mejoresPromedios[3];
        for (int i = 0; i < 3; i++) {
            mejoresPromedios[i] = industrias[i].getPromedioVenta();
        }

        int indiceMejor = 0;
        for (int i = 1; i < 3; i++) {
            if (mejoresPromedios[i] > mejoresPromedios[indiceMejor]) {
                indiceMejor = i;
            }
        }
         //Mensaje de mejor industria mostrada al usuario
        std::cout << "\nLa mejor industria es: " << industrias[indiceMejor].getNombre()
                  << " con un promedio de Q" << industrias[indiceMejor].getPromedioVenta() << "\n";

        // Preguntar si desea repetir al usuario
        std::cout << "\nDesea repetir el proceso? (s/n): ";
        std::cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}
