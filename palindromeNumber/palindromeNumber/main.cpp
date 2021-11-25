//
//  main.cpp
//  palindromeNumber
//
//  Created by Vedant Mistry on 25/11/21.
//

//palindrome number or not

#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    
    int reversedNumber=0;
    
    int temp = number;
    int remainder;
    
    while(number != 0){
        remainder = number % 10;
        reversedNumber = reversedNumber*10 + remainder;
        number /= 10;
    }
    
    if (reversedNumber == temp) {
        cout << "Palindrome number.";
    }
    else{
        cout << "Not palindrome number.";
    }
    
    return 0;
}
