/*
Date: 26/09/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description:
The tax brackets for the declaration of income of a certain country

Last Modification:
level  Puntuacion
Bonus of $2400 Base on your annual qualification
Inacceptable 0.0
Acceptable 0.4
worthy 0.6 o Mas
Write a programm to read score
*/
#include <iostream>
using namespace std;

int main()
{
    double calificacion,bono = 2400, porcentaje;
    cout << " Insert your calification: \n 1. 0.0  \n 2. 0.4   \n 3. 0.6 \n  Calification: ";
    cin >> calificacion ;

    porcentaje = calificacion*100;
    if(calificacion == 0){
        cout << " Your anual bonus is $0 " << endl;
    }
    else if(calificacion == 0.4){
        cout << " Your anual bonus is: $" << bono*0.4 <<"\n";
        cout << "Your payments porcentage is: "<< porcentaje<<"%";
    }
    else if(calificacion >= 0.6){
        cout << "Your anual bonus is: $" << bono*calificacion<<" Dollars \n";
        cout << "Your payments porcentage is: "<< porcentaje<<"%";
    }
    
    else{
        cout << "Nothing for u brotha: ";

    }
    
    cout<<"\n";
    cout<<"\n";

    return 0;    
   



}