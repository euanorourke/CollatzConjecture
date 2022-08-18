//Program name: Collatz Conjecture Calculator
//Author: Euan O'Rourke 2022
//Description: A calculator to work out how many steps it takes to make n=1 according to the Collatz Conjecture

#include <iostream>
#include <limits>
#include <sstream>
using namespace std;

int collatzAlgorithm(int n){
    int new_n;
    if(n % 2 == 0){
        new_n = n/2;            //if n is even, then n = n/2
        cout << new_n << endl;
    }
    else{
        new_n = (3*n)+1;        //if n is odd, then n= 3n + 1
        cout << new_n << endl;
    }
    return new_n;
}

int main(){
    int n;                      //n is the number to find the stopping point for
    int stopping_point;         //The stopping point is how many steps it takes to get to 1
    int userInput;              //Copy of n for later printing

    cout << "Collatz Conjecture Calculator \nPick a number(n) that is greater than 1:" << endl;
    cin >> n;                   // Take user input for n

    if(!cin || n < 1) {         //Input Validation
        cout << "Bad input. Try using a number that is greater than 1." << endl;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin >> n;
        cout << "\n";           //Print new line (makes it look neater)
    }


    userInput = n;
    while (n != 1){             //Pass n through the algorithm until it equals 1
        n = collatzAlgorithm(n); 
        stopping_point++;
    }
    cout << "The stopping point for "<< userInput << " is " << stopping_point;
    
    return 0;
}


