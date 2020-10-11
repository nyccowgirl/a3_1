/*
 Illustrates and displays pass-by-value and pass-by-reference.
 
 Trace_01.cpp
 a3/Exercises
 
 Created by nyccowgirl on 9/14/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void test2(int a, int b);
void test1(int &a, int &b);

int main(int argc, const char * argv[]) {
    int a = 8, b = 10;
        
    test2(b,a);
    cout << a << " " << b << endl;
    test1(b,a);
    cout << a << " " << b << endl;
    test1(a,a);
    cout << a << " " << b << endl;
    return 0;
}






void test1(int &a, int &b) {
    a = 4;
    b = 6;
    a = a + b + 3;
    cout << a << " " << b << endl;
}






void test2(int a, int b) {
    cout << a << " " << b << endl;
    a = 4;
    b = 6;
    a = a + b + 1;
    cout << a << " " << b << endl;
}


/*
 
 10 8
 11 6
 8 10
 13 6
 6 13
 15 15
 15 13
 Program ended with exit code: 0
 
 */
