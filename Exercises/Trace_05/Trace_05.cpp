/*
 Illustrates and displays global and local variables.

 Trace_05.cpp
 a3/Exercises
 
 Created by nyccowgirl on 9/14/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void first(int &x);
void second(int &x, int y);

int x,y,z;

int main(int argc, const char * argv[]) {
    x = 40; y = 50; z = 60;
    
    second(z, y);
    cout << x << " " << y << " " << z << endl;
    first(y);
    cout << x << " " << y << " " << z << endl;
    first(x);
    cout << x << " " << y << " " << z << endl;
    second(y, x);
    cout << x << " " << y << " " << z << endl;
    first(z);
    cout << x << " " << y << " " << z << endl;
}






void first(int &x) {
    int y;
    x = x * 2;
    y = x + z;
    z = z % 10;
}






void second(int &x, int y) {
    y = y + 1;
    x = y + z;
    z = x + z;
}


/*
 
 40 50 222
 40 100 2
 80 100 2
 80 83 85
 80 83 0
 Program ended with exit code: 0
 
 */
