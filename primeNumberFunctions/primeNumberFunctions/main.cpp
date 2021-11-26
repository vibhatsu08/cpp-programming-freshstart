//
//  main.cpp
//  primeNumberFunctions
//
//  Created by Vedant Mistry on 26/11/21.
//

//check prime number using functions
#include <iostream>
using namespace std;

int checkPrimeNumber(int);

int main(){
    int number;
    cin >> number;
    bool flag;
    
    flag = checkPrimeNumber(number);
    
    if (flag){
        cout << number << " is a prime number.";
    }
    else{
        cout << number << " is not a prime number.";
    }
    
    return 0;
}

int checkPrimeNumber(int n){
    bool isPrime = true;
    
    for (int i=2; i<=n/2; i++){
        if (n%i == 0){
            isPrime = false;
            break;
        }
    }
    
    return isPrime;
}

