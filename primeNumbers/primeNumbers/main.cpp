//
//  main.cpp
//  primeNumbers
//
//  Created by Vedant Mistry on 25/11/21.
//

//prime numbers in an interval

#include <iostream>
using namespace std;

int main(){
    int start, end, i;
    cin >> start >> end;
    
    bool isPrime = true;
    
    for (i=start; i<end; i++){
        for (int j=2; j<end; j++){
            if (i%j == 0){
                isPrime = false;
                break;
            }
        }
    }
    
    if (isPrime){
        cout << i << " ";
    }
    
    return 0;
}
