/*
 Trang Hoang
 CS110B
 Dave Harden
 9/15/20
 a3_1.cpp
 
 Assignment 3.1
 
 Program asks user to play guessing game whereby the program guesses user's number from 1
 to 100, inclusive, based on guessing the midpoints. User indicates whether the number is
 higher, lower or correct based on the guess. Game continues until the program accurately
 guesses the correct number. Program asks user to play again.
 
 Created by nyccowgirl on 9/15/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;


const int LOW_LIMIT = 1;                            // Defines lower bounds
const int HIGH_LIMIT = 100;                         // Defines upper bounds


void playOneGame();
void getUserResponseToGuess(int guess, char &result);
char validateInput(char result);
int getMidpoint(int low, int high);


int main(int argc, const char * argv[]) {
    char response;                                  // Holds response to start game
    
    cout << "Ready to play (y/n)? ";
    cin >> response;
    while (response == 'y') {
        playOneGame();
        cout << "Great! Do you want to play again (y/n)? ";
        cin >> response;
    }
}






// Definition of function playOneGame. Initiates a new game.

void playOneGame() {
    int lower = LOW_LIMIT, upper = HIGH_LIMIT;      // Defines initial lower/upper limits
    int guess;                                      // Holds guess based on midpoint
    char result = '\0';                             // Holds user input for guess accuracy
    
    cout << "Think of a number between 1 and 100." << endl;
    
    while (result != 'c') {
        guess = getMidpoint(lower, upper);
        cout << "My guess is " << guess << ". ";
        getUserResponseToGuess(guess, result);
        
        if (result == 'h') {
            lower = guess + 1;
        } else {
            upper = guess - 1;
        }
    }
}






// Definition of function getUserResponseToGuess. The function is passed a guess and gets
// the user's input on accuracy of guess as to whether the user's number is higher, lower
// or correct.

void getUserResponseToGuess(int guess, char &result) {
    cout << "Enter 'l' if your number is lower, 'h' if it is higher, ";
    cout << "'c' if it is correct: ";
    cin >> result;
    result = validateInput(result);
}






/*
 
 Alternative function to combine input validation and test out different iterations of
 logical and relational operators.
 
 void getUserResponseToGuess(int guess, char &result) {
     
     do {
         cout << "Enter 'l' if your number is lower, 'h' if it is higher, ";
         cout << "'c' if it is correct: ";
         cin >> result;
         
         if (result != 'l' && result != 'h' && result != 'c') {
             cout << "Error: Invalid input!" << endl;
         }
         
     } while (!(result == 'l' || result == 'h' || result == 'c'));
 }

 */






// Definition of function getMidpoint. Calculates and returns the midpoint of a range,
// based on two numbers that are passed into the function. Where the midpoint is in between
// two integers, the lower number is the midpoint.

int getMidpoint(int low, int high) {
    return (low + high) / 2;                    // Int will truncate to lower number
}






// Definition of validateInput. Validates user input for acceptable responses. Any other
// response will require the user to re-input the response until it is either h, l or c.

char validateInput (char result) {
    while (result != 'l' && result != 'h' && result != 'c') {
        cout << "Error: Invalid input!" << endl;
        cout << "Enter 'l' if your number is lower, ";
        cout << "'h' if your number is higher, 'c' if it is correct: ";
        cin >> result;
    }
    return result;
}


/*
 
 Ready to play (y/n)? y
 Think of a number between 1 and 100.
 My guess is 50. Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct: h
 My guess is 75. Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct: h
 My guess is 88. Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct: c
 Great! Do you want to play again (y/n)? y
 Think of a number between 1 and 100.
 My guess is 50. Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct: l
 My guess is 25. Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct: h
 My guess is 37. Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct: x
 Error: Invalid input!
 Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct: c
 Great! Do you want to play again (y/n)? n
 Program ended with exit code: 0
 
 */
