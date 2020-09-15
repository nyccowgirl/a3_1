/*
 Trang Hoang
 9/15/20
 Assignment 3.1
 
 Program guesses user's number from 1 to 100, inclusive, based on guessing the midpoints.

 a3_1.cpp
 
 Created by nyccowgirl on 9/15/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

const int LOW_LIMIT = 1;                            // Defines lower bounds
const int HIGH_LIMIT = 100;                         // Defines upper bounds

void playOneGame();
void getUserResponseToGuess(int guess, char &result);
char validateInput(char &result);
int getMidpoint(int low, int high);

int main(int argc, const char * argv[]) {
    char response;                                  // Holds response to start game
    
    cout << "Ready to play (y/n)? ";
    cin >> response;
    while (response == 'y') {
        playOneGame();
        cout << "Great! Do you want to play again (y/n)? ";
        cin >> response;
    return 0;
    }
}






// Definition of function playOneGame

void playOneGame() {
    int lower = LOW_LIMIT, upper = HIGH_LIMIT;      // Defines initial lower/upper limits
    int guess;                                      // Holds guess based on midpoint
    char result = '\0';                           // Holds user input for guess accuracy
    
    cout << "Think of a number between 1 and 100." << endl;
    
    while (result != 'c') {
        guess = getMidpoint(lower, upper);
        cout << "My guess is " << guess << ". ";
        getUserResponseToGuess(guess, result);
        
        if (result == 'h')
    }
    
}






// Definition of function getUserResponseToGuess

void getUserResponseToGuess(int guess, char &result) {
    
    cout << "Enter 'l' if your number is lower, 'h' if it is higher, ";
    cout << "'c' if it is correct: ";
    cin >> result;
    result = validateInput(result);

}






// Definition of function getMidpoint

int getMidpoint(int low, int high) {
    return (low + high - 1) / 2;
}






// Definition of validateInput

char validateInput (char &result) {
    while (result != 'l' && result != 'h' && result != 'c') {
        cout << "Invalid input: Enter 'l' if your number is lower, ";
        cout << "'h' if your number is higher, 'c' if it is correct: ";
        cin >> result;
    }
    return result;
}


/*
 

 
 */
