/*
Date: 28/09/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description: i gonna talk about a pizzeria where there u can select
multiple ingredients 
Last Modification:
Escribir un programa que pregunte al usuario si quiere una pizza 
vegetariana o no
*/
#include <iostream>

using namespace std;

int main()
{
    char pizza,ingrediente;
    cout <<"¿Quieres una pizza vegetariana? Y/N \n";
    cin>>pizza;

    
    if(pizza == 'Y' || pizza == 'y' ){
        cout <<" Estos son tus ingredientes: \n ";
    }
    else if (pizza == 'N' || pizza == 'n'){
        cout <<"Estos son tus otros ingredientes";
    }
}