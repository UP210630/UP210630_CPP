/*
Date: Sep/14/2022
Author: Miguel Alejandro alba Sánchez
Email: up210630@alumnos.upa.edu.mx
Description: DataType
Last Modification: Sep/19/2022
*/

//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>

//Use of namespace to avoid the use of std::
using namespace std;

//Main function for integer numbers
int main ()
{

    int entero = 4;
    float flotante = 2.565465654654;
    double grande = 2.565465654654;
    char caracter = 64;

    cout << "This program showed the types of data. \n";
    cout << "The number entero is: " << entero << endl;
    cout << "The size of entire is: " << sizeof(entero) << "bytes" << endl;
    cout << "The float number is: " << flotante << endl;
    cout << "The size of the float is: " << sizeof(flotante) << "bytes" << endl;
    cout << "The number double is: " << grande << endl;
    cout << "The size of the double is: " << sizeof(grande) << "bytes" << endl;
    cout << "The character char is: " << caracter << endl;
    cout << "The size of the char is: " << sizeof(caracter) << "byte" << endl;

    cout << "===============" << endl;

    printf("Usamos la funcion printf\n");
    printf("El numero entero es: %i \n", entero);
    printf("El numero flotante es: % 3.1f\n, flotante");

    //As a function it must return to a value, in this case 0
    return 0;
}