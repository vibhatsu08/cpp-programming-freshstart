//
//  main.cpp
//  primeNumber
//
//  Created by Vedant Mistry on 25/11/21.
//

//prime number or not

#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    int flag = 1; //not prime number
    
    for(int i=2; i<number; i++){
        if (number%i == 0){
            flag = 0;
        }
    }
    
    if (flag == 1){
        cout << number << " is a prime number!";
    }
    else{
        cout << number << " is not a prime number!";
    }
    
    return 0;
}
