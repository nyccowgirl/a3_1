/*
 Illustrates and displays global and local variables.

 Trace_03.cpp
 a3/Exercises
 
 Created by nyccowgirl on 9/14/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void p();

int b;

int main(int argc, const char * argv[]) {
    int a,c;
    a = 4; b = 5; c = 6;
    cout << a << " " << b << " " << c << endl;
    p();
    cout << a << " " << b << " " << c << endl;
}






void p() {
    int a,c;
    
    cout << a << " " << b << " " << c << endl;
    a = 1; b = 2; c = 3;
    cout << a << " " << b << " " << c << endl;
}


/*
 
 4 5 6
 32767 5 -1863313568
 1 2 3
 4 2 6
 Program ended with exit code: 0
 
 */
