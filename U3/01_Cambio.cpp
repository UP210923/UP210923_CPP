/*
Author: Alan Alejandro Hernandez Macias
Date: 24/10/2022
Description: 
*/
#include <iostream>

using namespace std;

void obtenertotal(int);
void obtenermonedas(int);
void imprimircambio(string);

int quinientos = 0, doscientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0;
int dinero;
int main()
{

    int dinero;
    cout << "Dame tu cantidad de dinero: ";
    cin >> dinero;
    obtenertotal(dinero);
}
void obtenertotal(int total)
{
    do
    {
    obtenertotal(total >= 500) ? quinientos++, total -= 500 : obtenertotal(total >= 200) ? doscientos++, total -= 200 : obtenertotal(total >= 100) ? cien++, total -= 100 : obtenertotal(total >= 50) ? cincuenta++, total -= 50 : obtenertotal(total >= 20) ? veinte++, total -= 20 : obtenertotal(total >= 10) ? diez++, total -= 10 : obtenertotal(total >= 5) ? cinco++, total -= 5 : obtenertotal(total >= 2) ? dos++, total -= 2 : obtenertotal(total >= 1) ? uno++, total -= 1;
    } while (dinero > 0);
}
void imprimircambio(int num)
{
    cout << "Tu cantidad de dinero fue: " << dinero << "Y tu cambio sera de" << endl;
    cout << "\n $500 = " << quinientos;
    cout << "\n $200 = " << doscientos;
    cout << "\n $100 = " << cien;
    cout << "\n $50 = " << cincuenta;
    cout << "\n $20 = " << veinte;
    cout << "\n $10 = " << diez;
    cout << "\n $5 = " << cinco;
    cout << "\n $2 = " << dos;
    cout << "\n $1 = " << uno;

    
}
