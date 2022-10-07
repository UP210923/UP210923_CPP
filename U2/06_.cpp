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
    
    int num =35;
    string resultado = "";
    while (num != 0){
        resultado = to_string(num%2) + resultado ;
        num /=2;
    }

    cout << resultado << endl;

   return 0;
}




        



//         // while(num!=0){
//         //     resultado = num%2 + resultado;
            
//         // cout << resultado;
//         // }
//     }
// )
