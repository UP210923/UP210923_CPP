/*
Author: Alan Alejandro Hernandez Macias
Date: 26/10/2022
Description: 
*/
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

void getCambio(int money);
void imprimir(int money);

int quinientos = 0, docientos = 0, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, dos = 0, uno = 0;
int denominaciones[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
int cambios[9] = {0};

int main()
{
    int amount;
    cout << "Enter the amount: " << endl;
    cin >> amount;
    getCambio(amount);
    imprimir(amount);

    return 0;
}

void getCambio(int money)
{

    for (int incremento = 0; incremento < 9; incremento++)
    {
        cambios[incremento] = money / denominaciones[incremento];
        money %= denominaciones[incremento];
    }
}
void imprimir(int money)
{

    cout << "Change of " << money << endl;
    for (int incremento = 0; incremento < 9; incremento++)
    {
        cout << denominaciones[incremento] << "\t" << cambios[incremento] << endl;
    }
}
