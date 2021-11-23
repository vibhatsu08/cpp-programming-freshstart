//
//  main.cpp
//  findFactorial
//
//  Created by Vedant Mistry on 23/11/21.
//

//program to find the factorial of a given number

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a random number: \n";
    cin >> n;
    int fact = 1;
    
    for (int i=1; i<=n; i++){
        fact *= i;
    }
    
    cout << fact;
    
    return 0;
}
