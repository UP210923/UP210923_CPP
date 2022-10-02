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
    char pizza;
    int ingrediente;
    cout << "¿Quieres una pizza vegetariana? RECUERDA todas nuestras pizzas llevan mozzarella y tomate\n Y/N \n";
    cin >> pizza;

    if (pizza == 'Y' || pizza == 'y')
    {
        cout << " Estos son tus ingredientes para tu pizza vegetariana \n¿Cual desea agregar? : \n 1.Pimiento \n 2.Tofu \n Escoge un ingrediente extra para agregar a tu pizza: ";
        cin >> ingrediente;

         cout << "Tu pizza es vegetariana, tus ingredientes son mozarrella y tomate:" << endl;

        if (ingrediente == 1)
        {
            cout << "-Tu ingrediente extra para tu pizza sera: Pimiento " << endl;
        }
        else if (ingrediente == 2)
        {
            cout << "-Tu ingrediente extra para tu pizza sera: Tofu " << endl;
        }

       
    }
    else if (pizza == 'N' || pizza == 'n')
    {
        cout << "Estos son tus otros ingredientes para tu pizza no vegetariana \n¿Cual desea agregar?: \n 1.Peperoni \n 2.Jamon \n 3.Salmon \n Escoge un ingrediente extra para agregar a tu pizza: ";
        cin >> ingrediente;

         cout << "Tu pizza no es vegetariana, tus ingredientes son mozarrella y tomate: " << endl;

        if (ingrediente == 1)
        {
            cout << "-Tu ingrediente extra para tu pizza sera: Peperoni";
        }
        else if (ingrediente == 2)
        {
            cout << "-Tu ingrediente extra para tu pizza sera: Jamon";
        }
        else if (ingrediente == 3)
        {
            cout << "-Tu ingrediente extra para tu pizza sera: Salmon";
        }
    }
    else
    {
        cout << "Solo se permite Y (es si) o N (es no)";
    }

   
    return 0;
}