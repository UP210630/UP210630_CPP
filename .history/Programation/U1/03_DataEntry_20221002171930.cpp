/*
Date: Sep/25/2022
Author: Miguel Alejandro Alba Sánchez
Email: up2106320@alumnos.upa.edu.mx
Description: DataEntry
Last Modification: Sep/25/2022
*/

//library for screen input and output management
#include <iostream>

//Library for the use de printf and scanf
#include <stdio.h>

//Use of namespace to avoid the std::
using namespace std;

//Main Function of integer type
int main (){
    
    int entero;
    float flotante;
    double grande;
    char caracter;

    cout << "This program displays user input. \n";
    cout << "Enter an integer data type: ";
    cin >> entero;
    cout << "The data entered is: " << entero << endl;
 
    cout << "=====================" << endl;

    printf("Using printf and scanf funcion\n");
    printf("Enter an integer data type: ");
    scanf("%d", &entero);
    printf("The data entered is: %c \n", entero);

    //Being a function, it must return a value in this case 0
    return 0;