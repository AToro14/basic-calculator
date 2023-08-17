// Name: Anthony Toro
//
// Date Started: 08/08/2023
//
// Last Edited: 08/16/2023
//
// Purpose: First project in Neovim, making a basic calculator


// Psudocode
// 1. #include statements
#include<iostream>
#include<stdio.h>
#include<cmath>
#include<iomanip>
using namespace std;

// 2. define variables and function prototypes
double num1, num2;
double ans;

double add(double arg1, double arg2);
double subtract(double arg1, double arg2);
double multiply(double arg1, double arg2);
double divide(double arg1, double arg2);
double exponential(double arg1, double arg2);
double nthRoot(double art1, double arg2);

void newLine(int num1);

// 3. get input from user
int main() {
    
    cout << "Hello World!\nLine 2";
    newLine(2);
    cout << "Enter a number: ";
    cin >> num1;
    // cout << "\nThe number is: " << num1;
    
    newLine(1);
    cout << "\nEnter another number: ";
    cin >> num2;
    // cout << "\nThe number is: \n" << num2;
    
    newLine(1);
    cout << "Your numbers added: " << add(num1, num2);
    newLine(1);
    cout << "Your numbers multiplied: " << multiply(num1, num2);
    newLine(1);
    cout << "Your numbers subtracted: " << subtract(num1, num2);
    newLine(1);
    cout << "Your number divided: " << setprecision(6) << divide(num1, num2);
    newLine(1);
    cout << "Your number exponentiated: " << exponential(num1, num2);
    newLine(1);
    cout << "The nth root of your number: " << nthRoot(num1, num2);
    newLine(1);

    return 0;
}

// 4. functions for calculator
double add(double arg1, double arg2) {
    
    ans = arg1 + arg2; 

    return ans;
}

double multiply(double arg1, double arg2) {

    ans = arg1 * arg2;

    return ans;
}

double subtract(double arg1, double arg2) {

    ans = num1 - num2;

    return ans;
}

double divide(double arg1, double arg2) {

    ans =  ( num1 /  num2 );
    
    return ans;
}

double exponential(double arg1, double arg2) {
    
    double temp = arg1;
    
    for ( int i = 0; i < (arg2 - 1 ); i++) {
        
        temp = multiply(temp, arg1);      

    }
    ans = temp; 

    return ans;
}

double nthRoot(double arg1, double arg2) {
    
    ans = pow(arg1, 1 / arg2);
    newLine(1);
    cout << "The " << arg2 << "th root of " << arg1 << " is: ";

    return ans;
}

void newLine(int num1) {

    if (num1 != 1) {

        for (int i = 0; i < num1; i++) {
            
            newLine(1);
        
        }
    }
    
    else {

    cout << "\n";

    }
    
    return;
}
// 5. output from calculator
