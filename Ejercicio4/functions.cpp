//
// Created by pinchiguillo on 05/11/2024.
//

#include "functions.h"
#include <limits>


// Funcion generada con la ayuda de Copilot
float* get_max_2(float productos[], int size) {

    // Se crea una array de 2 elementos, el maximo y el minimo. Por defecto se inicializa a infinito y -infinito
    static float max[2] = {-std::numeric_limits<float>::infinity(), -std::numeric_limits<float>::infinity()};

    for (int i = 0; i < size; i++) {
        if (productos[i] > max[0]) {
            max[1] = max[0];
            max[0] = productos[i];
        } else if (productos[i] > max[1]) {
            max[1] = productos[i];
        }
    }

    return max;
}