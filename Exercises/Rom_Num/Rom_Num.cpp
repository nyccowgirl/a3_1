/*
 Program that performs arithmetic operations on roman numbers

 Rom_Num.cpp
 a3/Exercises
 
 Created by nyccowgirl on 9/14/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void getRomanNo(int &num1, int &num2);
void readRomanNo(int &num);
void getOperator(char &op);
double calculateOp(int num1, char op, int num2);
void writeAnswer(char op, int num1, int num2, double result);
void convertToRomNo(int num);
void convertToRomNo(double num);

int main(int argc, const char * argv[]) {
    
    int roman1, roman2;                         // holds numbers from user input
    double answer;                              // holds result
    char operand;                               // holds operand input from user
    
    getRomanNo(roman1, roman2);
    getOperator(operand);
    answer = calculateOp(roman1, operand, roman2);
    writeAnswer(operand, roman1, roman2, answer);
    cout << "End of program." << endl;
    return 0;
}






// Get two roman numerals from user input.

void getRomanNo(int &num1, int &num2) {
    cout << "Enter the first number: ";
    readRomanNo(num1);
    
    while (num1 < 0) {
        cout << "Invalid input - Enter the first number is: ";
        readRomanNo(num1);
    }
    
    cout << "The first number is: " << num1 << endl;
    cout << "Enter the second number: ";
    readRomanNo(num2);
    
    while (num2 < 0) {
        cout << "Invalid input - Enter the second number: ";
        readRomanNo(num2);
    }
    
    cout << "The second number is: " << num2 << endl;
}






// Get arithmetic operator from user input.

void getOperator(char &op) {
    cout << "Enter the desired arithmetic operator: ";
    cin >> op;
    
    while (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "Invalid input - Enter the desired arithmetic operator: ";
        cin >> op;
    }
}






// Display answer from program.

void writeAnswer(char op, int num1, int num2, double result) {
    cout << "The ";
    
    switch (op) {
        case '+':
            cout << "sum";
            break;
        case '-':
            cout << "difference";
            break;
        case '*':
            cout << "product";
            break;
        case '/':
            cout << "quotient";
            break;
    }
    
    cout << " of ";
    convertToRomNo(num1);
    cout << " and ";
    convertToRomNo(num2);
    cout << " is ";
    convertToRomNo(result);
    cout << "(" << result << ")." << endl;
}





// Calculate result of the two numbers using the operator provided by user.

double calculateOp(int num1, char op, int num2) {
    switch (op) {
        case '+':
            return num1 + num2;
            break;
        case '-':
            return num1 - num2;
            break;
        case '*':
            return num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: a number cannot be divided by zero!";
                return 0;
            } else {
                return (double) num1 / num2;
            }
            break;
    }
    return 0;
}






// Convert integer to roman numeral.

void convertToRomNo(int num) {
    while (num > 0) {
        if (num >= 1000) {
            cout << "M";
            num -= 1000;
        } else if (num >= 500) {
            cout << "D";
            num -= 500;
        } else if (num >= 100) {
            cout << "C";
            num -= 100;
        } else if (num >= 50) {
            cout << "L";
            num -= 50;
        } else if (num >= 10) {
            cout << "X";
            num -= 10;
        } else if (num >= 5) {
            cout << "V";
            num -= 5;
        } else {
            cout << "I";
            num -= 1;
        }
    }
}






// Convert double to roman numeral.

void convertToRomNo(double num) {
    while (num > 0) {
        if (num >= 1000) {
            cout << "M";
            num -= 1000;
        } else if (num >= 500) {
            cout << "D";
            num -= 500;
        } else if (num >= 100) {
            cout << "C";
            num -= 100;
        } else if (num >= 50) {
            cout << "L";
            num -= 50;
        } else if (num >= 10) {
            cout << "X";
            num -= 10;
        } else if (num >= 5) {
            cout << "V";
            num -= 5;
        } else if (num >= 1){
            cout << "I";
            num -= 1;
        } else {
            cout << "N/A";
            num = 0;
        }
    }
}






// Read roman numeral from user input and convert to sum of individual letters of roman
// numeral.

void readRomanNo(int &num) {
    char ch;
    bool error = false;
    
    cin.get(ch);
    
    while (ch != '\n' && !error) {
        switch (ch) {
            case 'M':
                num += 1000;
                break;
            case 'D':
                num += 500;
                break;
            case 'C':
                num += 100;
                break;
            case 'L':
                num += 50;
                break;
            case 'X':
                num += 10;
                break;
            case 'V':
                num += 5;
                break;
            case 'I':
                num += 1;
                break;
            default:
                num = -1;
                error = true;
        }
        cin.get(ch);
    }
}


/*
 
 Enter the first number: VII
 The first number is: 7
 Enter the second number: IX
 The second number is: 11
 Enter the desired arithmetic operator: +
 The sum of VII and XI is XVIII(18).
 End of program.
 Program ended with exit code: 0
 
 Enter the first number: MCMLXXI
 The first number is: 2171
 Enter the second number: MCMLXXXVIII
 The second number is: 2188
 Enter the desired arithmetic operator: /
 The quotient of MMCLXXI and MMCLXXXVIII is N/A(0.99223).
 End of program.
 Program ended with exit code: 0
 
 */
