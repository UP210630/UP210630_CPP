/*
Date: Sep/25/2022
Author: Miguel Alejandro Alba Sánchez
Email: up210630@alumnos.upa.edu.mx
Description: Benefits
Last Modification: Sep/25/2022
*/

//Library for output and input of the screen
#include <iostream>
//LIbrary for the use of printf and scanf
#include <stdio.h>

//Use of namespace to avoid the use of std::

using namespace std;


//Main function integer type
int main (){

    cout << "The points that can be obtained in the evaluation start at 0.0 and can go up,
     \ntranslating into better benefits. The points you can get 
     \nemployees can be 0.0, 0.4, or more, but not intermediate values 
     \nbetween the figures mentioned. Below is a table with the 
     \nlevels corresponding to each score. The amount of money earned 
     \non each level is $2,400 multiplied by the level score. 
     \nLevel              Score 
     \nUnacceptable        0.0 
     \nAcceptable          0.4 
     \nDeserving           0.6 or more \n";
    
    //Declaring variables
    double score, money;
    
    //Asking the user for its score
    cout << "Please enter your score during your evaluation: ";
    cin >> score;
 
    //If the score is 0.0

    if(score == 0.0){
        cout << "Your level is Unacceptable \n";
        beneficio = money * score;
            cout << "Your benefit is: $" << beneficio << endl;

//If the score is 0.4

    }
    else if (score == 0.4){
        cout << "Your level is Acceptable \n";
        beneficio = money * score;
            cout << "Your benefit is: $" << beneficio << endl;

//If the score becomes greater than 1, it cancels and asks the user to enter a valid score.

    }
    else if (score > 1){
        cout << "Please enter a valid score" << endl;
    }

     //As a function it must return to a value, in this case 0
    return 0;
}