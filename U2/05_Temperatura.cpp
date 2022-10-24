/*
Date: 3/10/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description: i gonna talk about temperature
im doing a program where if you write some temperatures u gonna get an average of all them
Last Modification:23/10/2022
 Write a program that ask the user 5 temperatures and get the average
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
