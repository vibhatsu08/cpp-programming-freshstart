//
//  main.cpp
//  fibonacciSeries
//
//  Created by Vedant Mistry on 23/11/21.
//

//program to print the fibonacci series
#include <iostream>
using namespace std;

int main(){
    int n1, n2, nextTerm, end;
    cin >> end;
    
    n1 = 0;
    n2 = 1;
    nextTerm = 0;
    
    for (int i=1; i<=end; i++){
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
        
        cout << nextTerm << " ";
    }
    
    return 0;
}
