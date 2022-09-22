/*
Date: 22/09/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description: IF Simple
Last Modification:
*/

#include <iostream>

using namespace std;

    int main()
    {
        int numero;
        int dato = 1; 

        cout << "Ingresa un numero entero: ";
        cin >> numero;
        if (numero == dato){
            cout <<" El numero es igual a dato" << endl;
        }
        if (numero > dato){
            cout <<" El numero es mayor al dato" << endl;
        }
        if (numero < dato){
            cout <<" El numero es menor al dato" << endl;
        }
        if (numero != dato){
            cout <<" El numero es diferente al dato" << endl;
        }
        if (numero <= dato){
            cout <<" El numero es menor o igual al dato" << endl;
        }
        if (numero >= dato){
            cout <<" El numero es mayor o igual al dato" << endl;
        }
        

        return 0;
    }
    