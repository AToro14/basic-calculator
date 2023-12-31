// Name: Anthony Toro
//
// Date Started: 08/08/2023
//
// Last Edited: 08/20/2023
//
// Purpose: First project in Neovim, making a basic calculator


// Psudocode
// 1. #include statements
#include<iostream>
#include<stdio.h>
#include<cmath>
#include<iomanip>
#include "functions.h"
#include<cstdlib> 
using namespace std;

// 2. define variables
double num1, num2;
double ans;
char operation;
char arrow[8] = {' ', ' ', ' ', ' ', ' ', ' ', ' '};

// 3. get input from user
int main() {
    
    system("cls");
    cout << "Enter a number: ";
    cin >> num1;
    newLine(1);
    // cout << "\nThe number is: " << num1;
    
    /* TODO: Check if input is valid
    *
    */

    // 3.a ask user which operation to use
    printMenu(); 
    cin >> operation;
    menuChooseOp(operation);
    printMenu();
    // cout << operation << "";
    cout << "\nEnter another number: ";
    cin >> num2;
    // cout << "\nThe number is: \n" << num2;
    chooseOp(operation);
    
    newLine(2);
    cout << num1 << " + " << num2 << " = " << add(num1, num2);
    newLine(1);
    cout << num1 << " - " << num2 << " = " << subtract(num1, num2);
    newLine(1);
    cout << num1 << " * " << num2 << " = " << multiply(num1, num2);
    newLine(1);
    cout << num1 << " / " << num2 << " = " << setprecision(6) << divide(num1, num2);
    newLine(1);
    cout << num1 << " ^ " << num2 << " = " << exponential(num1, num2);
    newLine(1);
    cout << num1 << " ^(1/ " << num2 << ") = " << nthRoot(num1, num2); 
    newLine(1);
    cout << num2 << "!" << " = " << factorial(num2); 
    // cout << "The tetration is: " << tetrate(num1, num2);
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

    ans = ( num1 / num2 );
    
    return ans;
}

double exponential(double base, double power) {
    
    double temp = base;
    
    for ( int i = 0; i < (power - 1 ); i++ ) {
        
        temp = multiply(temp, base);      

    }
    
    return temp;
}

double nthRoot(double base, double root) {
    
    ans = pow(base, 1 / root);
    cout << "The " << root << "th root of " << base << " is: ";

    return ans;
}

double factorial(int arg1) {

    double temp = arg1; 
    
    if (arg1 > 1) {
        
        for (int i = 1; i < arg1; i++) {
            
            temp = multiply(temp, i);
        }
    }

    else if (arg1 > -1) {
        
        return 1;
    }

    else {
    
        newLine(1);
        cout << "Invalid input: ";
    }

    return temp;
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

void menuChooseOp(char operation) {
    
    switch (operation) {
        
        case '+':
            arrow[0] = '>';
            break;
        
        case '-':
            arrow[1] = '>';
            break;
        
        case '*':
            arrow[2] = '>';
            break;
       
        case '/':
            arrow[3] = '>';
            break;
       
        case '^':
            arrow[4] = '>';
            break;
       
        case 'n':
            arrow[5] = '>';
            break;
       
        case '!':
            arrow[6] = '>';
            break;
        
        default:
            break;
    }

    return;
}

void chooseOp(char operation) {
    
    switch (operation) {
        
        case '+':
            // cout << "You selected addition.";
            newLine(1);
            cout << "Answer: " << add(num1, num2);
            break;
        
        case '-':
            // cout << "You selected subtraction.";
            newLine(1);
            cout << "Answer: " << subtract(num1, num2);
            break;
        
        case '*':
            // cout << "You selected multiplication.";
            newLine(1);
            cout << "Answer: " << multiply(num1, num2);
            break;
       
        case '/':
            cout << "Answer: " << divide(num1, num2);
            break;
       
        case '^':
            // cout << "You selected exponentiation.";
            newLine(1);
            cout << "Answer: " << exponential(num1, num2);
            break;
       
        case 'n':
            // cout << "You selected nth root.";
            newLine(1);
            cout << "Answer: " << nthRoot(num1, num2);
            break;
       
        case '!':
            // cout << "You selected factorial."; 
            newLine(1);
            cout << "Answer: " << factorial(num2); 
            break;
        
        default:
            cout << "Invalid Choice";
            break;
    }

    return;
}

void printMenu() {
    
    system("cls");
    cout << "Enter a number: " << num1;
    newLine(2);
    cout << "Choose an Operation:"; 
    newLine(1);
    cout << arrow[0] << "[+] - Addition";
    newLine(1);
    cout << arrow[1] << "[-] - Subtraction";
    newLine(1);
    cout << arrow[2] << "[*] - Multiplication";
    newLine(1);
    cout << arrow[3] << "[/] - Division";
    newLine(1);
    cout << arrow[4] << "[^] - Exponentiation";
    newLine(1);
    cout << arrow[5] << "[n] - nth Root";
    newLine(1);
    cout << arrow[6] << "[!] - Factorial"; 
    newLine(1);

    return;
}

// 5. output from calculator
