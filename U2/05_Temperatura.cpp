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

int main()
{
    int contador=0;
    float temperatura;
    float temperaturaBaja=10000;
    float temperaturaAlta=-10000;
    float tempAverage = 0;
    do{
        cout <<"Give me the temperature: ";
        cin >> temperatura;
        tempAverage += temperatura;
        contador++;
        if(temperatura <= temperaturaBaja)
        temperaturaBaja = temperatura;
        if(temperatura >= temperaturaAlta)
        temperaturaAlta = temperatura;


    }while(contador < 6);
    

    cout <<"The average of temperature today is: " << tempAverage/6 <<endl;
    cout << "The lowest temperature today is: " << temperaturaBaja <<endl;
    cout << "The highest temperature today is: " << temperaturaAlta <<endl; 
    return 0;
}