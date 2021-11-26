//
//  main.cpp
//  primeNumbersFunctions
//
//  Created by Vedant Mistry on 26/11/21.
//

//program to display prime numbers between two intervals

#include <iostream>
using namespace std;

int checkPrimeNumber(int); //function prototype

int main(){
    int start, end; //start and end variables
    bool flag; //flag to check if a given number is a prime number or not
    
    cin >> start >> end; //taking input for the start and end variables
    
    if (start > end){ //if start > end, swap the values of the variables
        end = start + end;
        start = end - start;
        end = end - start;
    }
    
    for(int i=start+1; i<end; i++){ //first loop, to loop through the numbers between start and end.
        flag = checkPrimeNumber(i); //to check the number values
        
        if(flag){
            cout << i << " "; //if the flag is true, i.e., if it's a prime number, print the prime number
        }
    }
    
    return 0;
}

int checkPrimeNumber(int n){ //function to check the prime numbers in the interval
    bool isPrime = true;
    
    if (n==0 || n==1){ //if n is 0 or 1, return the number
        isPrime = false;
    }
    else{
        for (int j=2; j<n/2; j++){ //loop for the prime numbers starts from 2, and ends halfway to check if the number is divisible by the counter
            if (n%j == 0){
                isPrime = false;
                break;
            }
        }
    }
    
    return isPrime; //return the prime number if true
}
