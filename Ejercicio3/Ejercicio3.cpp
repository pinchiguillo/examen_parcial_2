//
// Created by pinchiguillo on 05/11/2024.
//

#include "Ejercicio3.h"
#include <iostream>

using namespace std;

void ejercicio3() {

    cout << "---- Ejercicio 3 ---"<< endl;

    float notas[8];


    // Llenar array con las notas
    for (int i = 0; i < 8; i++) {
        cout << "Introduce la nota del ejercicio" << i + 1 << ": ";
        cin >> notas[i];
    }

    // Sumar notas
    float sum = 0;
    for (int i = 0; i < 8; i++) {
        sum += notas[i];
    }

    cout << "La media de las notas es: " << sum / 8 << endl;

}
