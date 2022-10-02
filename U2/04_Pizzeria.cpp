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
    char pizza;
    int ingrediente;
    cout << "¿Do you want a vegetarian pizza ? REMEMBER all our pizza have mozzarella and tomate\n Y/N \n";
    cin >> pizza;

    if (pizza == 'Y' || pizza == 'y')
    {
        cout << " These are your ingredients for your vegan pizza \n¿Which toppings do you like to add? : \n 1.Pepper \n 2.Tofu \n Pick an extra topping to add to the pizza: ";
        cin >> ingrediente;

         cout << "Your pizza is vegetarian, Your ingredients are mozarrella and tomate:" << endl;

        if (ingrediente == 1)
        {
            cout << "-Your extra ingredient for your pizza will be: Pepper " << endl;
        }
        else if (ingrediente == 2)
        {
            cout << "-Your extra ingredient for your pizza will be: Tofu " << endl;
        }

       
    }
    else if (pizza == 'N' || pizza == 'n')
    {
        cout << "These are your ingredients for your no vegan pizza \n¿Which toppings do you like to add?: \n 1.Pepperoni \n 2.Ham \n 3.Salmon \n Pick an extra topping to add to the pizza: ";
        cin >> ingrediente;

         cout << "Your pizza is not vegetarian, Your ingredients are mozarrella and tomate: " << endl;

        if (ingrediente == 1)
        {
            cout << "-Your extra ingredient for your pizza will be: Pepperoni";
        }
        else if (ingrediente == 2)
        {
            cout << "-Your extra ingredient for your pizza will be: Ham";
        }
        else if (ingrediente == 3)
        {
            cout << "-Your extra ingredient for your pizza will be: Salmon";
        }
    }
    else
    {
        cout << "Just allowed Y (its yes) or N (its no)";
    }

   
    return 0;
}