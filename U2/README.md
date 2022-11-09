<h1 align="center",>
Welcome to unit two: Control structures and cycles

the example exercises for each topic, this is a little demostration of 
- 01_Renta (you can calculate how many $ you wanna pay for Rent)
**Income tax rates**<br>

> Less than $10,000 5%<br>
> Among $10,000 y $20,000 15%<br>
> Among $20,000 y $35,000 20%<br>
> Among $35,000 y $60,000 30%<br>
> More of $60,000 45%<br>

Write a program that asks the user for their annual income and shows the corresponding tax rate on the screen.<br>
```
            if (renta < 10000) {
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
In a certain company, its employees are evaluated at the end of each year. The points that can be obtained in the evaluation start at 0.0 and can go up, translating into better benefits. The points you can get employees can be 0.0, 0.4, 0.6 or more, but not intermediate values between the figures mentioned.Below is a table with the levels corresponding to each score. The amount of money earned on each level is $2,400 multiplied by the level score.<br>

**Level Score**<br>

> Unacceptable	0.0<br>
> Acceptable	0.4<br>
> Meritorious	0.6 or more<br>

Write a program that reads the user's score and indicates their level of performance, as well as the amount of money the user will receive.
Thank you very much for choosing us! We look forward to serving you again.<br>
 ```
    porcentaje = calificacion*100;
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
Write a program for a company that has arcades for all ages and wants to automatically calculate the price to charge its customers for entering. The program must ask the user for the customer's age and display the price of the ticket. Yes the client is under 4 years old can enter for free, if they are between 4 and 18 years old they must pay $5 and if they are over 18 years old, $10.<br>
 ``` 
    if( edad>0 && edad < 4){
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
The Bella Napoli pizzeria offers vegetarian and non-vegetarian pizzas to its customers. The ingredients for each type of pizza are listed below.<br>

> Vegetarian ingredients: Pepper and tofu.<br>
> Non-vegetarian ingredients: Pepperoni, Ham and Salmon.<br>

Write a program that asks the user if he wants a vegetarian pizza or not, and based on his answer shows him a menu with the ingredients available for him to choose from. You can only choose one ingredient besides the mozzarella and tomato that are in all the pizzas.<br>

 ``` 
        if (pizza == 'Y' || pizza == 'y')
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
Make a program in which 6 temperatures are entered and determine the average, the most
the lowest and the highest.<br>
 ``` 
    int contador=0;
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
Make a program that reads indefinitely quantities of products and their price, and at the end
indicate the total of the invoice. To know that the purchase has been completed, you must
enter a 0 in the amount.<br>
 ``` 
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
 ```
 **This is my seventh assignment" 
 
 - 07_Binary to decimal. ( i gonna talk about a Decimal to binary program The number you enter will change from decimal to binary )
Write a program that converts from decimal to binary, only for numbers.
integers greater than 0. The result can be displayed as an integer variable or in a
character set.<br>
 ``` 
   int num =15;
    string resultado = "";
    while (num != 0){
        resultado = to_string(num%2) + resultado ;
        num /=2;
    }

    cout << resultado << endl;
 ```
 **This is my eighth assignment" 
 
 - 08_Multiplication table (if you type in this program a number it will ask you how many col you will need, then the program make a multiplication table with graphics)
Write a program capable of asking the user to enter the number whose multiplication table he wants to see and what number the table will go to.<br>
 ``` 
  cout << " What number will you want your board?: ";
    cin >> numero;
    cout << " How many lines will it be?: ";
    cin >> cantidad;

    for (int parada = 1; parada <= cantidad; parada++)
    {
        if (parada == 1)
        {
            for (int lineas = 0; lineas <= 39; lineas++)
            {
                cout << "-";
            }
            cout << "\n";
        }
        cout << "|" << parada << "\t x \t" << cantidad << "\t = \t" << (parada * cantidad) << "\t|\n";

        for (int lineas = 0; lineas <= 39; lineas++)
        {
            cout << "-";
        }
        cout << "\n";
 ```
 **This is my ninth assignment" 
 
 - 09_EcuacionBiseccion. ( Math method for getting roots )
Write a program capable of finding the root between two numbers entered by the user.<br>
 ``` 
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
 ```
 
