//
// Created by pinchiguillo on 05/11/2024.
//

#include "Ejercicio1.h"
#include <iostream>

using namespace std;

void ejercicio1() {

    cout << "---- Ejercicio 1 ---"<< endl;

    cout << "Introduce un numero: ";
    int c;
    cin >> c;
    if (c == 0) {
        cout << "El numero es 0" << endl;
    } else if (c > 0) {
        cout << "El numero es positivo" << endl;
    } else {
        cout << "El numero es negativo" << endl;
    }


}