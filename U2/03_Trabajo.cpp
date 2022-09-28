/*
Date: 28/09/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description:Were explaining about a playzone for all the crowd
and they have to paid for the entry to the site 
Last Modification:
entry cost
less than 4 years old = Free
if ur kid have 4 years or 18 years old have to paid 5$ and
if hes older than 18 years old have to paid 10$
*/
#include <iostream>
using namespace std;

int main()
{
    int edad, costo;
    cout <<"¿Cuantos años tienes carnal? ";
    cin >> edad;

    if( edad>0 && edad < 4){
        cout <<"Tu entrada es gratis pasele \n";
    }
    else if (edad>=4 && edad<=18){
        cout <<"Tienes que pagar $5 Pesos \n";
    }
    else if (edad>18){
        cout <<"Tienes que pagar $10 Pesos \n";
    }
    else {
        cout <<" Cual es esa edad? \n";
    }
    return 0;

}