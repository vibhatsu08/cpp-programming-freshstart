//
//  main.cpp
//  findGCD
//
//  Created by Vedant Mistry on 23/11/21.
//

//program to find the GCD of a two numbers

#include <iostream>
using namespace std;

int main(){
    cout << "Enter two random numbers: \n";
    int num1, num2, hcf = 1;
    cin >> num1 >> num2;
    
    if (num1 > num2){
        
        for (int i=1; i<num1; i++){
            if ((num1%i == 0) && (num2%i == 0)){
                hcf = i;
            }
        }
        cout << hcf;
    }
    else if(num2 > num1){
        for (int i=1; i<num2; i++){
            if ((num1%i == 0) && (num2%i == 0)){
                hcf = i;
            }
        }
        cout << hcf;
    }
}
