/*
 Illustrates and displays pass-by-value and pass-by-reference, as well as global and local.

 Trace_02.cpp
 a3/Exercises
 
 Created by nyccowgirl on 9/14/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void test1(int a, int &b);
void test2(int &b, int c);

int main(int argc, const char * argv[]) {
    int a = 1, b = 2, c = 3;
        
    test1(a,b);
    cout << a << " " << b << " " << c << endl;
    test1(b,c);
    cout << a << " " << b << " " << c << endl;
    test2(a,b);
    cout << a << " " << b << " " << c << endl;
    test2(c,b);
    cout << a << " " << b << " " << c << endl;
}






void test1(int a, int &b) {
    int c;
    
    c = 5;
    a = b + c;
    b = a + c;
}







void test2(int &b, int c) {
    c = 10;
    b = c + b;
}


/*
 
 1 12 3
 1 12 13
 11 12 13
 11 12 23
 Program ended with exit code: 0
 
 */
