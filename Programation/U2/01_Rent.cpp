/*
Date: Sep/22/2022
Author: Miguel Alejandro Alba Sánchez
Email: up210630@alumnos.upa.edu.mx
Description: Rent:)
Last Modification: Sep/22/2022
*/

//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>

//Use of namespace to avoid the use of std::

using namespace std;

//Program that ask the user its annual rent and shows the type of tax that corresponds

//Main function integer type
int main (){
    
    cout << "The tax brackets for the declaration of income in a given country are the following: \n
    Income                             Tax rate \n
    Less than   $10,000                 5% \n
    Between     $10,000 and $20,000     15% \n
    Between     $20,000 and $35,000     20% \n
    Between     $35,000 and $60,000     30% \n
    More than   $60,000                 45% " << end;

    //Declaring variables
    float income, taxToPay;
    int percent;

    //Ask the user for their income
    cout << "What is your annual rent?: ";
    cin >>income;
    
    
    //Look for the tax rate acording to the income
    if (income<10000){
        percent=5;
    }
    else if (income>=10000 && income<20000){
        percent=15;
    }
    else if (income>=20000 && income<35000){
        percent=20;
    }
    else if (income>=35000 && income<60000){
        percent=30;
    }
    else if (income>=60000){
        percent=45;
    }
    
    
    //Operation of how much the user have to pay acording to the tax rate and print the result
    taxToPay=income*percentage/100;
    cout << "Your tax rate is: " <<percentage;  cout << "%\n";
    cout << "You have to pay: $" <<taxToPay; cout <<endl;

    //As a function it must return to a value, in this case 0
    return 0;
}