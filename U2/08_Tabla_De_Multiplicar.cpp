/*
Date: 12/10/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description: the program make a multiplication table
multiple
Last Modification:
*/
#include <iostream>
using namespace std;

int main()
{
    int cantidad, multiplicador, numero;
    cout << " What number will you want your board?: ";
    cin >> numero;
    cout << " How many lines will it be?: ";
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
