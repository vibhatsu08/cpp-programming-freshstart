//
//  main.cpp
//  sumOfPrimeNumbers
//
//  Created by Vedant Mistry on 26/11/21.
//

#include <iostream>
using namespace std;

bool checkPrime(int);

int main(){
    cout << "Enter a random number: ";
    int number, i;
    cin >> number;
    bool flag = false;
    
    for(i=2; i<=number/2; i++){
        if (checkPrime(i)){
            if (checkPrime(number-i)){
                cout << number << "  " << i << " " << number-i << endl;
                flag = true;
            }
        }
    }
    
    if (!flag){
        cout << number << "cannot be expressed in sum of two prime numbers.";
    }
}

bool checkPrime(int n){
    int i;
    bool isPrime = true;
    
    if (n==0 || n==1){
        isPrime = false;
    }
    else{
        for (i=2; i<=n/2; i++){
            if(n%i == 0){
                isPrime = false;
                break;
            }
        }
    }
    
    return isPrime;
}
