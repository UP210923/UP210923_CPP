the example exercises for each topic, this is a little demostration of 
- 01_Renta (you can calculate how many $ you wanna pay for Rent)
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
 
 - 02_Beneficios (you can calculate how many $ your gonna get in your anual bonus)
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
 
 - 03_Trabajo (I explain How much are you going to pay for your entry according to your age)  
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
 **This is my fifth assignment" 
 
 - 05_Temperature (i do a program where if you write some temperatures u gonna get an average of all them)
 ``` int contador=0;
    float temperatura;
    float temperaturaBaja=10000;
    float temperaturaAlta=-10000;
    float tempAverage = 0;
    do{
        cout <<"Give me the temperature: ";
        cin >> temperatura;
        tempAverage += temperatura;
        contador++;
        if(temperatura <= temperaturaBaja)
        temperaturaBaja = temperatura;
        if(temperatura >= temperaturaAlta)
        temperaturaAlta = temperatura;
 ```
**This is my sixth assignment" 
 
 - 06_Products ( I explain how to Read an infinite amount of products, their price and at the end show the total to pay )
 ``` do
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
 ```
 
 
