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
#include "functions.h"
using namespace std;

// 2. define variables
double num1, num2;
double ans;

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
    cout << "The tetration is: " << tetrate(num1, num2);
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

double exponential(double base, double power) {
    
    double temp = base;
    
    for ( int i = 0; i < (power- 1 ); i++) {
        
        temp = multiply(temp, base);      

    }
    ans = temp; 

    return ans;
}

double nthRoot(double base, double root) {
    
    ans = pow(base, 1 / root);
    newLine(1);
    cout << "The " << root << "th root of " << base << " is: ";

    return ans;
}

double tetrate(double base, double height) {
    
    // evaluate from right to left
    // example
    // 2^^4 = 2^(2^(2^2))
    // use loops
    double temp = base;

    for (int i = 0; i < height - 1; i++) {
        
        temp = exponential(base, temp);
        
    }

    return ans = temp;
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
