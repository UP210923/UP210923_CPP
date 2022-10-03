# UP210923_CPP
Repository of my programming material

In this repository the works of the subject of Programming will be saved

![Esta es una imagen de ejemplo](https://github.com/UP210923/UP210923_CPP/blob/main/imagenes/%C3%ADndice.jpeg)

## **Unity And Contents **
-  1. Introduction of programming
-  2. Estructures and cicles of control
-  3. Functions
-  4. Files and arrangements

**_My Fav Song At The Moment_**  [Mi Rolon](https://www.youtube.com/watch?v=ARWg160eaX4)

the example exercises for each topic, this is a little demostration of 
- 01_Renta
```if (renta < 10000) {
            cout <<"you have to pay $" <<renta*.05;
            cout << " in taxes";
        }
            else if (renta >= 10000 && renta < 20000) {
            cout << "you have to pay $" <<renta*.15;
            cout << " in taxes";
        }
            else if (renta >= 20000 && renta < 35000) {
            cout << "you have to pay $" <<renta*.20;
            cout << " in taxes";
        }
            else if (renta >= 35000 && renta < 60000) {
            cout << "you have to pay $" <<renta*.30;
            cout << " in taxes";
            else {
            cout << "You have to set a number";
 ```

 **This is my second assignment" 
 
 - 02_Beneficios
 ```porcentaje = calificacion*100;
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
 ```
 **This is my third assignment" 
 
 - 03_Trabajo
 ``` if( edad>0 && edad < 4){
        cout <<"Your entry is free pasele \n";
    }
    else if (edad>=4 && edad<=18){
        cout <<"You have to pay $5 Pesos \n";
    }
    else if (edad>18){
        cout <<"You have to pay $10 Pesos \n";
    }
    else {
        cout <<" What is that age carnal? \n";
 ```
  **This is my fourth assignment " This a little example of the programm where I explain how you can order a pizza
  in the example. I just only set the Yes site as the same parf of "No"
 
 - 04_Pizzeria
 ``` if (pizza == 'Y' || pizza == 'y')
    {
        cout << " These are your ingredients for your vegan pizza \n¿Which toppings do you like to add? : \n 1.Pepper \n 2.Tofu \n Pick an extra topping to add to the pizza: ";
        cin >> ingrediente;

         cout << "Your pizza is vegetarian, Your ingredients are mozarrella and tomato:" << endl;

        if (ingrediente == 1)
        {
            cout << "-Your extra ingredient for your pizza will be: Pepper " << endl;
        }
        else if (ingrediente == 2)
        {
            cout << "-Your extra ingredient for your pizza will be: Tofu " << endl;
        }
 ```
 



