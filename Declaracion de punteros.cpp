// Declaracion de punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


/*Punteros - Declaracion de Punteros

&n = La dirrecion de n
*n = La variable cuya direccion esta almacenada en n
Puntero = una variable que va a almacenar la direccion de memoria
*/
#include <iostream>
using namespace std;

int main()
{
	int num, *dir_num; // El puntero debe tener el mismo tipo de dato que la variable.
		
	num= 20;
	dir_num = &num;

  cout << "Numero: "<<num<<endl;
  cout << "Direccion de memoria: " << &num << endl; // Direccion de n

  // Implementando el puntero

  cout << "Numero: " << *dir_num << endl; // Imprime lo que hay dentro de la direccion del puntero
  cout << "Direccion de memoria: " << dir_num << endl; // Direccion de memoria
}

