/*Date: 12/10/2022
Author: Alan Alejandro Hernandez Macias
Email: up210923@alumnos.upa.edu.mx
Description: i gonna talk about a pizzeria where there u can select
multiple ingredients
Last Modification:
 Write a program that ask the user if he wants a vegan pizza or not
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double solveEquation(float worth)
{
    return pow(worth, 2) - worth - 12;
}
int main()
{
    double a;
    double b;
    double c = (a + b) / 2;
    double ya = solveEquation(a);
    double yb = solveEquation(b);
    double yc = solveEquation(c);
    float error = 0.01;
    float noRoot = 0;

    cout << "Enter the value of (a): ";
    cin >> a;
    cout << endl;
    cout << "Enter the value of (b): ";
    cin >> b;
    cout << endl;

        cout << "\t" << "a" << "\t"
        << "\t" << "b" << "\t"
        << "\t" << "c" << "\t"
        << "\t" << "ya" << "\t"
        << "\t" << "yb" << "\t"
        << "\t" << "yc" << "\t" << endl;
    cout << "________________________________________________________________________________________________" << endl;
    cout << endl;

    do
    {
        c = (a + b) / 2;
        ya = solveEquation(a);
        yb = solveEquation(b);
        yc = solveEquation(c);
        if (ya * yc < 0)
        {
            b = c;
        }
        else if (yc * yb < 0)
        {
            a = c;
        }
        else
        {
            noRoot = 1;
        }

        if (noRoot == 0)
        {
            cout << fixed;
            cout << setprecision(3) << "\t" << a << "\t"
            << "\t" << b << "\t"
            << "\t" << c << "\t"
            << "\t" << ya << "\t"
            << "\t" << yb << "\t"
            << "\t" << yc << "\t" << endl;
        }
        else
        {
            cout << "\t" << "No root."
            << "\t" << "No root."
            << "\t" << "No root."
            << "\t" << "No root."
            << "\t" << "No root."
            << "\t" << "No root." << endl;
        }
        
    } while ((abs(yc) >= error) && (noRoot != 1));

    cout << endl;

    return 0;
}
