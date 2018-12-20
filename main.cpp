//
//  main.cpp
//  RecFac01
//
//  Created by Asher Abrams on 2018/12/19.
//  Copyright © 2018 Asher Abrams. All rights reserved.
//
//  Approximates e as sum of 1/x!.
// 
//

// PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// DECLARATIONS
int n;
double x = 1, sum = 1;
double func01(int);

// DEFINITIONS
double func01(int n)
{
    for(n = 1; n < 16; n++)
    {
        x = x/n;
        sum = sum + x;
        cout << n << '\n';
        cout << x << '\n';
        cout << sum << '\n';
        cout << '\n';
    }
    return x;
}

// MAIN
int main() {
    func01(x);
    return 0;
}


