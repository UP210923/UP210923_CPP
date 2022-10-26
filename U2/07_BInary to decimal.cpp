/*
Date: 28/09/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description: i gonna talk about a Decimal to binary program
The number you enter will change from decimal to binary
Last Modification:
*/
#include <iostream>
using namespace std;

int main()
{
    
    int num =15;
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
