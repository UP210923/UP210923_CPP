/*
Date: 22/09/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description:
The tax brackets for the declaration of income of a certain country

Last Modification:
*/

#include <iostream>

using namespace std;

    int main(){
        double renta;

        cout << "How much is your rent? carnal: ";
        cin >> renta;

        if (renta < 10000) {
            cout <<"you have to pay $" <<renta*.05;
            cout << " in taxes";
        }
        else if (renta >= 10000 && renta < 20000) {
            cout << "you have to pay $" <<renta*.15;
            cout << " in taxes";
        }
        else if (renta >= 20000 && renta < 35000) {
            cout << "you have to pay $" <<renta*.20;
            cout << " in taxes";
        }
        else if (renta >= 35000 && renta < 60000) {
            cout << "you have to pay $" <<renta*.30;
            cout << " in taxes";
        }
        return 0;
    }