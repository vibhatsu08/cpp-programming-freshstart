#include <iostream>
using namespace std;

int sumOfNumbers(int);

int main (){
    int number;
    cin >> number;
    
    int result = sumOfNumbers(number);
    
    cout << result;
    
    return 0;
}

int sumOfNumbers (int n){
    if (n > 1){
        return n + sumOfNumbers(n - 1);
    }
    else {
        return 1;
    }
}
