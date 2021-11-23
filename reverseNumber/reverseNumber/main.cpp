//
//  main.cpp
//  reverseNumber
//
//  Created by Vedant Mistry on 23/11/21.
//

//program to reverse a number

#include <iostream>
using namespace std;

int main(){
    int number, reversedNumber = 0, remainder;
    cout << "Enter a random number: \n";
    cin >> number;
    
    while(number != 0){
        remainder = number %10;
        reversedNumber = reversedNumber*10 + remainder;
        number /= 10;
    }
    
    cout << reversedNumber;
    
    return 0;
    
}
