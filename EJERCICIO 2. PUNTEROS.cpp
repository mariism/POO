// EJERCICIO 2. PUNTEROS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*Ejercicio 2: Determinar si un número es primo o no; con punteros y además indicar en qué posición
memoria se guardó el número.*/


#include <iostream>
using namespace std;
int main()
{
    int numero, *dir_numero;

    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    dir_numero = &numero;

    bool es_primo = true;

    if (*dir_numero <= 1) {
        es_primo = false;
    }
    else {
        for (int i = 2; i * i <= *dir_numero;i++) {
            if (*dir_numero % i == 0) {
                es_primo = false;
                break; // Se detiene al encontrar primer divisor
            }
        }
    }
    if (es_primo) {
        cout << "El numero " << *dir_numero << " es primo" << endl;
    }
    else {
        cout << "El numero " << *dir_numero << " no es primo" << endl;
    }
    cout << "La posicion es: " << dir_numero << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
