/*
Date: 28/09/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description: i gonna talk about a pizzeria where there u can select
multiple ingredients
Last Modification:
 Write a program that ask the user if he wants a vegan pizza or not 
*/

#include <iostream>

using namespace std;

int getMaxVal (int num1, int num2);

int main(){
    int num1, num2;
    int valormaximo;

    cout <<"Dame un numero: ";
    cin >> num1;
    cout <<"Dame otro numero: ";
    cin >> num2;

    cout <<"\n ================\n";
    valormaximo= getMaxVal(num1,num2);

    cout <<"el valor maximo es: "<<valormaximo<<endl;
    return 0;
}

int getMaxVal(int num1, int num2){
    int valorMaximo;
    if (num1 > num2){
        valorMaximo = num1;
    }
    else{
        valorMaximo = num2;
    }
    return valorMaximo;
}