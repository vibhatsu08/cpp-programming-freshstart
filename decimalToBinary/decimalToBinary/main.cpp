//program to convert binary to decimal

#include <iostream>
#include <cmath>

using namespace std;

int main (){
    long long n; //take input in binary
    cin >> n;
    
    long long remainder = 0, decimal = 0, i = 0;
    
    while (n != 0){
        remainder = n % 10;
        decimal += remainder * pow(2, i);
        n /= 10;
        i++;
    }
    
    cout << decimal << endl;
    
    return 0;
}
