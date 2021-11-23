//
//  main.cpp
//  largestNumber
//
//  Created by Vedant Mistry on 23/11/21.
//

//program to find the largest number among threee numbers

#include <iostream>
using namespace std;

int main(){
    cout << "Enter three random numbers: \n";
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    
    if (num1 > num2 && num1 > num3){
        cout << num1 << " is the largest number\n";
    }
    else if (num2 > num1 && num2 > num3){
        cout << num2 << " is the largest number\n";
    }
    else if (num3 > num2 && num3 > num1){
        cout << num3 << " is the largest number\n";
    }
    
    return 0;
}

