//
// Created by pinchiguillo on 05/11/2024.
//

#include <iostream>
#include <locale>

#include "Ejercicio1/Ejercicio1.h"
#include "Ejercicio2/Ejercicio2.h"
#include "Ejercicio3/Ejercicio3.h"
#include "Ejercicio4/Ejercicio4.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "es_ES.UTF-8");

    while (true) {
        cout << "Elija el ejercicio a ejecutar (1-4, 0 Terminar programa): ";
        int option;
        cin >> option;

        switch (option) {
            case 1:
                ejercicio1();
            break;
            case 2:
                ejercicio2();
            break;
            case 3:
                ejercicio3();
            break;
            case 4:
                ejercicio4();
            break;
            case 0:
                return 0;
            default:
                cout << "Opción no válida" << endl;
            break;
        }
    }

    return 0;
}