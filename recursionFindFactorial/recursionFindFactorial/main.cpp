#include <iostream>
using namespace std;

int findFactorial (int);

int main (){
    int number;
    cin >> number;
    
    int result = findFactorial (number);
    cout << result << endl;
    
    return 0;
}

int findFactorial (int n){
    if (n > 1){
        return n * findFactorial(n - 1);
    }
    else {
        return 1;
    }
}
