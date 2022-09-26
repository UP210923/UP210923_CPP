/*
Date: 26/09/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description:
Los tramos inpositivos para la declaracion de la renta de un determinado pais

Last Modification:
Nivel
Nivel  Puntuacion
Bono de 2400 Base a su calificacion anual
Inaceptable 0.0
Aceptable 0.4
Meritorio 0.6 o Mas
EScribir un programa que lea la puntuacion 
*/
#include <iostream>
using namespace std;

int main()
{
    double calificacion,bono = 2400, porcentaje;
    cout << " Ingresa tu calificacion: \n 1. 0.0  \n 2. 0.4   \n 3. 0.6 \n  Calificacion: ";
    cin >> calificacion ;

    porcentaje = calificacion*100;
    if(calificacion == 0){
        cout << " Tu bono anual es de $0 " << endl;
    }
    else if(calificacion == 0.4){
        cout << " Tu bono anual es de: $" << bono*0.4 <<"\n";
        cout << "Tu porcentaje del pago es de:"<<porcentaje<<"%";
    }
    else if(calificacion >= 0.6){
        cout << "Tu bono anual es de: $" << bono*calificacion<<" pesos \n";
        cout << "Tu porcentaje del pago es de:"<<porcentaje<<"%";
    }
    
    else{
        cout << "No te toca na pa: ";

    }
    
    cout<<"\n";
    cout<<"\n";

    return 0;    
   



}