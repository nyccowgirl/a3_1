/*
 Illustrates and displays global and local variables.

 Trace_04.cpp
 a3/Exercises
 
 Created by nyccowgirl on 9/14/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
 */


#include <iostream>
using namespace std;

void x(int tic);

int toe;

int main(int argc, const char * argv[]) {
    int tic, tac;
    
    tic = 1; tac = 2; toe = 3;
    cout << tic << " " << tac << " " << toe << endl;
    x(tic);
    cout << tic << " " << tac << " " << toe << endl;
    x(tac);
    cout << tic << " " << tac << " " << toe << endl;
    x(toe);
    cout << tic << " " << tac << " " << toe << endl;
}






void x(int tic)
{
    int tac;
    
    cout << tic << " " << tac << " " << toe << endl;

    tic = 4; tac = 5; toe = 6;
    cout << tic << " " << tac << " " << toe << endl;
}


/*
 
 4 5 6
 1 2 6
 6 -1863313568 6
 4 5 6
 1 2 6
 Program ended with exit code: 0
 
 */
