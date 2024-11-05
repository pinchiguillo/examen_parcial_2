//
// Created by pinchiguillo on 05/11/2024.
//

#include <iostream>
#include <locale>

#include "Ejercicio1/Ejercicio1.h"
#include "Ejercicio2/Ejercicio2.h"
#include "Ejercicio3/Ejercicio3.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "es_ES.UTF-8");

    ejercicio1();
    ejercicio2();
    ejercicio3();

    return 0;
}