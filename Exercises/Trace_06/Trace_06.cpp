/*
 Illustrates and displays global and local variables.

 Trace_06.cpp
 a3/Exercises
 
 Created by nyccowgirl on 9/14/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void p(int &a, int b);

int a,b,c,d;

int main(int argc, const char * argv[]) {
    int a = 1, b = 2, c = 3, d = 4;
    p(a,b);
    cout << a << " " << b << " " << c << " " << d << endl;
}






void p(int &a, int b) {
    int c;
    
    cout << a << " " << b << " " << c << " " << d << endl;
    a = 5; b = 6; c = 7; d = 8;
}


/*
 
 1 2 -272632456 0
 5 2 3 4
 Program ended with exit code: 0
 
 */

