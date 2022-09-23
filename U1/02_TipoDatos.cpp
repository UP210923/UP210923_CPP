/*
Date:
Author: Alan Alejandro Hernandez Macias
Email : up210923@alumnos.upa.edu.mx
Description :
show the different 

Last Modification :
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>
//Libreria para el uso de printf y scanf
#include <stdio.h>

//Uso del namespace para evitar el std::
using namespace std;

//Funcion principal de tipo entero
int main()
{
	//Mas información en:
	//https://www.geeksforgeeks.org/c-data-types/
	int entero = 4;
	float flotante = 2.565465654654;
	double grande = 2.5654656554654;
	char caracter = 64;

	cout << "Este programa muestra los tipos de datos. \n";
	cout << "El numero entero es: " << entero << endl;
	cout << "El tamaño del entero es: " << sizeof(entero) << "bytes" << endl;
	cout << "El numero flotante es: " << flotante << endl;
	cout << "El tamaño del flotante es : " << sizeof(flotante) << "bytes" << endl;
	cout << "El numero double es: " << grande << endl;
	cout << "El tamaño del double es: " << sizeof(grande) << "bytes" << endl;
	cout << "El caracter char es:" << caracter << endl;
	cout << "El tamaño del char es: " << sizeof(caracter) << "byte" << endl;

	cout << "============================" << endl;

	//Mas información en:
	//https://cplusplus.com/reference/cstdio/printf/
	printf("Usando la funcion print\n");
	printf("El numero entero es: %i \n", entero);
	printf("El numero flotante es: %3.1f \n", flotante);

	//Al ser una funcion debe retornar un valor, en este caso 0
	return 0;
}