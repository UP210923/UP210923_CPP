/*
Date: 28/09/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description: Read an infinite amount of products, their price and at the end show the total to pay 
Last Modification: 
*/
#include <iostream>
using namespace std;

int main()
{
	float precio, cantiProduct = 0, total, suma;
	cout << "Bienvenidos a su tienda \t  ." << " en donde debe ingresar el nombre de su producto con cantidad y su precio";
	do
	{
		cout << "\n Cuantos productos necesita? ";
		cin >> cantiProduct;
		if (cantiProduct < 0);
		{
		cout << "Necesito una cantidad real de producto: ";
		break;
		}
	cout << "De cuanto es el precio del producto: ";
	cin >> precio;
	suma = cantiProduct*precio;
	total += suma;
	
	while (cantiProduct != 0);
	{
		cout << "Tu total de productos son : " << total << "y su precio sera" << precio;

		return 0;


	}