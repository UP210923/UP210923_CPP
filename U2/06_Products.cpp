/*
Date: 5/10/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description: Read an infinite amount of products, their price and at the end show the total to pay 
Last Modification: 
*/
#include <iostream>
using namespace std;

int main()
{
	float precio, cantiProduct = 0, total=0, suma;
	cout << "welcome to your store \t \n "
		 << "Where you must enter the name of your product with quantity and its price";
	do
	{
		cout << "\n how many products do you need? ";
		cin >> cantiProduct;
		if (cantiProduct < 0)
		{
			cout << "I need a real quantity of product: ";
			break;
		}
		cout << "How much is the price of the product $ : ";
		cin >> precio;
		suma = cantiProduct * precio;
		total += suma;

	}while (cantiProduct != 0);
			cout << "Your total bill will be $" << total<<endl;
			return 0;
		}
