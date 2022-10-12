/*
Date: 12/10/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description: i gonna talk about a pizzeria where there u can select
multiple ingredients
Last Modification:
 Write a program that ask the user if he wants a vegan pizza or not
*/
#include <iostream>
using namespace std;

int main()
{
    int cantidad, multiplicador, numero;
    cout << " De cual numero vas a querer tu tabla?: ";
    cin >> numero;
    cout << " De cuantos renglones sera?: ";
    cin >> cantidad;

    for (int parada = 1; parada <= cantidad; parada++)
    {
        if (parada == 1)
        {
            for (int lineas = 0; lineas <= 39; lineas++)
            {
                cout << "-";
            }
            cout << "\n";
        }
        cout << "|" << parada << "\t x \t" << cantidad << "\t = \t" << (parada * cantidad) << "\t|\n";

        for (int lineas = 0; lineas <= 39; lineas++)
        {
            cout << "-";
        }
        cout << "\n";
    }
    return 0;
}