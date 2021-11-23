//
//  main.cpp
//  evenOrOdd
//
//  Created by Vedant Mistry on 23/11/21.
//

//program to check if a given number is even or odd

#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    
    if (number%2 == 0){
        cout << "Even number";
    }
    else{
        cout << "Odd number";
    }
    
    return 0;
}
