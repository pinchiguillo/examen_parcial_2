//
// Created by pinchiguillo on 05/11/2024.
//

#include "Ejercicio2.h"
#include <iostream>

using namespace std;

void ejercicio2() {

    cout << "---- Ejercicio 2 ---"<< endl;

    cout << "Introduce un numero del 1 al 7: ";
    int c;
    cin >> c;

    switch (c) {

        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "El numero no esta en rango" << endl;
    }


}
