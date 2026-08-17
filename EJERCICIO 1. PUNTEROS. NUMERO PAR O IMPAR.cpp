// EJERCICIO 1. PUNTEROS. NUMERO PAR O IMPAR.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


/*Ejercicio 1: Determinar si un numero es par o impar. Senalar posicion de memoria. Con punteros
*/
#include <iostream>
using namespace std;


int main()
{
    int numero, *dir_numero; //definiendo puntero

    cout << "Ingrese numero: " << endl;
    cin>> numero;

    dir_numero = &numero; //Guardando la pos de memoria de esta variable numero, dentro de la variable puntero

    if (*dir_numero % 2 == 0) {
        cout << "El numero " << *dir_numero << " es par" << endl; //* al inicio del puntero, senalo lo de adentro
        cout << "La posicion es: " << dir_numero << endl; // da posicion de memoria
    }
    else {
        cout << "El numero " << *dir_numero << " es impar" << endl;
        cout << "La posicion es: " << dir_numero << endl;
    }
   
    return 0;
}
