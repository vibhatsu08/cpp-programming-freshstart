//
//  main.cpp
//  sumOfNaturalNumbers
//
//  Created by Vedant Mistry on 23/11/21.
//

//program to find the sum of a given n natural numbers

#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter a random number: ";
    cin >> n;
    
    for (int i=1; i<=n; i++){
        sum += i;
    }
    cout << sum;
}
