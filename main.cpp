// Name: Anthony Toro
//
// Date Started: 08/08/2023
//
// Last Edited: 08/09/2023
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
int num1, num2;
double ans;

int add(int arg1, int arg2);
int subtract(int arg1, int arg2);
int multiply(int arg1, int arg2);
double divide(int arg1, int arg2);
int exponential(int arg1, int arg2);
int nthRoot(int art1, int arg2);

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
int add(int arg1, int arg2) {
    
    ans = arg1 + arg2; 

    return ans;
}

int multiply(int arg1, int arg2) {

    ans = arg1 * arg2;

    return ans;
}

int subtract(int arg1, int arg2) {

    ans = num1 - num2;

    return ans;
}

double divide(int arg1, int arg2) {

    ans =  ( (double) num1 / (double) num2 );
    
    return ans;
}

int exponential(int arg1, int arg2) {
    
    int temp = arg1;
    
    for ( int i = 0; i < (arg2 - 1 ); i++) {
        
        temp = multiply(temp, arg1);      

    }
    ans = temp; 

    return ans;
}

int nthRoot(int art1, int arg2) {

    newLine(1);
    cout << "Used nthRoot() Function";
    newLine(1);

    return 0;
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
