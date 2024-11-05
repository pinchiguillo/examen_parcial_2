//
// Created by pinchiguillo on 05/11/2024.
//

#include "Ejercicio4.h"
#include <iostream>
#include "functions.h"

using namespace std;

void ejercicio4() {

    cout << "---- Ejercicio 3 ---" << endl;


    // Llenar array con precios (Modificable para x productos)
    float productos[3];
    for (int i = 0; i < 3; i++) {
        cout << "Introduce el precio del producto " << i + 1 << ": ";
        cin >> productos[i];
    }

    // Obtener los precios mas altos
    float* max = get_max_2(productos, 3);

    // Sumar
    float total = 0;
    for (int i = 0; i < 2; i++) {
        total += max[i];
    }

    cout << "El total a pagar es: " << total << "€" <<endl;


}
